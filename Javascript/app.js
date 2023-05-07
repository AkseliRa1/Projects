//jshint esversion:6

const express = require("express");
const https = require("https");
const bodyParser = require("body-parser");
const app = express();

app.use(bodyParser.urlencoded({
  extended: true
}));


app.get("/", function(req, res) {
  res.sendFile(__dirname + "/index.html");



});

app.post("/", function(req, res) {
  console.log(req.body.cityName);
  const q = (req.body.cityName);
  console.log(q);
  const apiKey = "01b6ee000fcd5b933f396d352ccb4416";
  const units = "metric";
  const url = "https://api.openweathermap.org/data/2.5/weather?q=" + q + "&appid=" + apiKey + "&units=" + units;

  https.get(url, function(response) {


    console.log(response.statusCode);


    response.on("data", function(data) {
      const weatherData = JSON.parse(data);
      const temp = weatherData.main.temp;
      const fell = weatherData.weather[0].description;
      const icon = weatherData.weather[0].icon;
      const imageURL = "http://openweathermap.org/img/wn/" + icon + "@2x.png";
      res.write("<h1> The temperature in " + q + " is " + temp + " degrees Celsius </h1>");
      res.write("<h1> Weather is curently " + fell + "</h1>");
      res.write("<img src=" + imageURL + ">");

    });



  });

});





app.listen(3000, function() {
  console.log("server is running on port 3000");
});
