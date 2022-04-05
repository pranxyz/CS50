  var count=1;
function mouseCount() {
  document.getElementById("mcount").innerHTML=count++;
}

function postArea() {
  var d=new Date();
  var p=document.getElementsByTagName("textarea");
  var t=document.getElementsByClassName("post-time");
  var c=document.getElementsByClassName("post-content");
  t.innerHTML=d;
  c.innerHTML=p[0].value;
  
  var color= "";
  var colorName= document.getElementsByName("color");
  var bold="";
  var italic="";
  var font=document.getElementsByName("style");
  var num=document.getElementsByName("visible").value;
  var n=document.getElementsByName("quantity")[0].value;
    
    if (colorName[0].checked == true) {
      color = "blue";
    }
    else if(colorName[1].checked == true){
      color = "red";
    }
    if(font[0].checked == true){
      bold = "bold";
    }
    if(font[1].checked == true){
      italic = "italic";
    }
    
  for(var i=0;i<n;i++) {
  document.getElementById("posts").innerHTML+="<div class='post-time'>"+t.innerHTML+"</div>"+"<br/>"+"<div class='post-content' style='color:"+color+";font-style:"+italic+";font-weight:"+bold+"'>"+c.innerHTML+"</div>"+"<br/>";
}

}

function bmenu() {
  var main= document.getElementById("main");
  var menu= document.getElementById("menu");
  main.style.display="none";
  menu.style.display="block";
}

function bback() {
  var main= document.getElementById("main");
  var menu= document.getElementById("menu");
  main.style.display="block";
  menu.style.display="none";
}

function changeColor(e) {
  document.body.style.backgroundColor= e.value;
}