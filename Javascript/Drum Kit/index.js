
for (var i = 0; i < document.querySelectorAll('.drum').length; i++ ){

document.querySelectorAll(".drum")[i].addEventListener("click", function(){

var konkeli = this;
buttoninnerHTMl = this.innerHTML;
//konkeli.style.color = "white";
//0konkeli.style.color = "red";
makesound(buttoninnerHTMl);
buttonAnimation(buttoninnerHTMl);



});

}



document.addEventListener("keypress", function(event){

  var koke = event.key;

  console.log(koke)


   makesound(event.key);
   buttonAnimation(event.key);



});









function makesound(key){
  switch(key){
    case "w":
    var tom4 = new Audio("tom-4.mp3");
    tom4.play();



      break;


    case "a":
    var tom3 = new Audio("tom-3.mp3");
    tom3.play();



      break;


    case "s":
    var tom2 = new Audio("tom-2.mp3");
    tom2.play();



      break;


    case "d":
    var crash = new Audio("crash.mp3");
    crash.play();

      break;


    case "j":
    var kick = new Audio("kick-bass.mp3");
    kick.play();

      break;



    case "k":
    var snare = new Audio("snare.mp3");
    snare.play();

       break;


    case "l":
    var tom1 = new Audio("tom-1.mp3");
    tom1.play();

       break;

  default: console.log(buttoninnerHTMl);

}

 }



function buttonAnimation(currentKey){
   var activeButton = document.querySelector("." + currentKey);
   window.setTimeout(function() {
   activeButton.classList.toggle("pressed");
 }, 100);


 window.setTimeout(function() {
 activeButton.classList.toggle("pressed");
}, 500);




}
