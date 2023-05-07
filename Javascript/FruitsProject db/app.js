
//jshint esversion:6

const mongoose = require ('mongoose');

// Create fruitsDB
mongoose.connect('mongodb://localhost:27017/fruitsDB', { useNewUrlParser: true });

const fruitSchema = new mongoose.Schema({
  name: {
    type: String,
    required: [true, "Please check your data entry, no name is specified!"]
  },
  rating: {
    type: Number,
    min: 1,
    max: 10
  },
  review: String
});

// Creates a new collection Fruits
const Fruit = mongoose.model('Fruit', fruitSchema);

// Adds a fruit named Apple to the Fruits collection and follows the fruitSchema model

//const peach = new Fruit ({
//   name: "Peach",
//   rating: 8,
  // review: "They are just so sweet!"
//});

//peach.save();




const personSchema = new mongoose.Schema({
  name: String,
  age: Number,
  favoriteFruit: fruitSchema
});

const Person = mongoose.model('Person', personSchema );




 const kiwi = new Fruit ({
   name: "Kiwi",
   rating: 10,
   review: "The best fruit!"
});

//
 const orange = new Fruit ({
   name: "Orange",
   rating: 4,
  review: "Too sour for me"
 });

 const banana = new Fruit ({
   name: "Banana",
   rating: 3,
   review: "Weird texture"
 });

 banana.save();

 Person.updateOne({name:"John"}, {favoriteFruit:banana}, function(err){
   if(err){
     console.log(err);
   }else{
     console.log("succesfully updated document");
   }
 });



Fruit.find(function(err, fruit){
  if(err){
    console.log(err);
  }else{
    mongoose.connection.close();
    fruit.forEach(function(fruit){
      console.log(fruit.name);

    });

  }
});


 //Fruit.insertMany([kiwi, orange, banana],function(err){
//   if (err) {
//     console.log(err);
//   } else {
//     console.log("succesfully saved all the fruits");
//   }
// });


// const peach = new Fruit ({
//   name: "Peach",
//   rating: 8,
//   review: "They are just so sweet!"
// });
//
// peach.save();

// const pineapple = new Fruit ({
//   name: "Pineapple",
//   rating: 10,
//   review: "Nobody can hate Pineapple!"
// });
//
// // pineapple.save();

// const person = new Person ({
//   name: "Amy",
//   age: 12,
//   favoriteFruit: pineapple
// });

// person.save();











// Insert many documents into a collection
// Fruit.insertMany([kiwi, orange, banana], function(err) {
//   if (err) {
//     console.log(err);
//   } else {
//     console.log("Successfully saved all the fruits to fruitsDB");
//   }
// });

// How to update a document in a collection




// How to delete a document in a collection
// Fruit.deleteOne({name: "Pineapple"}, function(err){
//   if (err) {
//     console.log(err);
//   } else {
//     console.log("Document has been Successfully Deleted!");
//   }
// });




    // Close connection that way you don't have to close it manually through the terminal




const findDocuments = function(db, callback) {
  // Get the documents collection
  const collection = db.collection('fruits');
  // Find some documents
  collection.find({}).toArray(function(err, fruits) {
    assert.equal(err, null);
    console.log("Found the following records");
    console.log(fruits);
    callback(fruits);
  });
};
