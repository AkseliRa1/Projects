//jshint esversion:8


const express = require("express");
const mongoose = require("mongoose");
const bodyParser = require("body-Parser");




const app = express();



app.set('view engine', 'ejs');

app.use(bodyParser.urlencoded({extended: true}));
app.use(express.static("public"));
main().catch(err => console.log(err));

async function main() {
  await mongoose.connect('mongodb+srv://rantolaa:apina4589@cluster0.ujgva.mongodb.net/todolistDB');

  // use `await mongoose.connect('mongodb://user:password@localhost:27017/test');` if your database has auth enabled
}

const itemsSchema = {

   name: String
};

const Item = mongoose.model("Item", itemsSchema);


const item1 = new Item ({
   name: "eat"

});

const item2 = new Item ({
   name: "Sleep"

});

const item3 = new Item ({
   name: "wakeup"

});


const defaultItems = [item1, item2, item3];

const listSchema = {
  name: String,
  items: [itemsSchema]

};

const List = mongoose.model("list",listSchema);

app.get("/", function(req, res){

  Item.find({}, function(err, founditems) {

    if(founditems.length === 0){

      Item.insertMany(defaultItems, function(err, docs) {
        if (err){
          console.log(err);
        }
        else{
          console.log("successfully saved defauts items to DB");
        }

        res.redirect("/");

      });

    }else{
      res.render("list", {listTitle: "Today", newListItems: founditems});
    }


  });


});


app.get("/:customListName", function(req,res){
  const customListName = req.params.customListName;

  List.findOne({name: customListName}, function(err,foundlist){

    if(!foundlist){
      console.log("Doesn't exest");

      const list = new List({
        name: customListName,
        items: defaultItems

      });

        list.save();
    res.redirect("/"+ customListName);
    }else{

    console.log("list already exist");
    res.render("list", {listTitle: foundlist.name, newListItems: foundlist.items});

    }

  });


});



app.post("/", function(req, res){


    const itemName = req.body.newItem;

    const item = new Item ({
       name: itemName

    });

    item.save();
    res.redirect("/");

});


app.post("/delete", function(req, res){
   const checkItemId = req.body.checkbox;
   console.log(checkItemId);

Item.findByIdAndRemove(checkItemId,function(err){
  if(err){
    console.log("delete failed");
  }else{
    console.log("delete successfully");
  }
});

res.redirect("/");
});






app.get("/about",function(req, res){

  res.render("about");
});



app.listen(3000, function(){
  console.log("serveri on päällä portti 3000");
});
