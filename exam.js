filterSelection("all");
function filterSelection(c) {
  var x, i;
  x = document.getElementsByClassName("filterDiv");
  if (c == "all") c = "";
  for (i = 0; i < x.length; i++) {
    w3RemoveClass(x[i], "show");
    if (x[i].className.indexOf(c) > -1) w3AddClass(x[i], "show");
  }
}

function w3AddClass(element, name) {
  var i, arr1, arr2;
  arr1 = element.className.split(" ");
  arr2 = name.split(" ");
  for (i = 0; i < arr2.length; i++) {
    if (arr1.indexOf(arr2[i]) == -1) {element.className += " " + arr2[i];}
  }
}

function w3RemoveClass(element, name) {
  var i, arr1, arr2;
  arr1 = element.className.split(" ");
  arr2 = name.split(" ");
  for (i = 0; i < arr2.length; i++) {
    while (arr1.indexOf(arr2[i]) > -1) {
      arr1.splice(arr1.indexOf(arr2[i]), 1);     

    }
  }
  element.className = arr1.join(" ");
}

var btnContainer = document.getElementById("myBtnContainer");
var btns = btnContainer.getElementsByClassName("btn");
for (var i = 0; i < btns.length; i++) {
  btns[i].addEventListener("click", function(){
    var current = document.getElementsByClassName("active");
    current[0].className = current[0].className.replace(" active", "");
    this.className += " active"; 
  });
} 
  
function bmenu1() {
  var main= document.getElementById("main1");
  var menu= document.getElementById("menu1");
  main.style.display="none";
  menu.style.display="block";
}

function bback1() {
  var main= document.getElementById("main1");
  var menu= document.getElementById("menu1");
  main.style.display="block";
  menu.style.display="none";
}

function bmenu2() {
  var main= document.getElementById("main2");
  var menu= document.getElementById("menu2");
  main.style.display="none";
  menu.style.display="block";
}

function bback2() {
  var main= document.getElementById("main2");
  var menu= document.getElementById("menu2");
  main.style.display="block";
  menu.style.display="none";
}

function bmenu3() {
  var main= document.getElementById("main3");
  var menu= document.getElementById("menu3");
  main.style.display="none";
  menu.style.display="block";
}

function bback3() {
  var main= document.getElementById("main3");
  var menu= document.getElementById("menu3");
  main.style.display="block";
  menu.style.display="none";

}

function bmenu4() {
  var main= document.getElementById("main4");
  var menu= document.getElementById("menu4");
  main.style.display="none";
  menu.style.display="block";
}

function bback4() {
  var main= document.getElementById("main4");
  var menu= document.getElementById("menu4");
  main.style.display="block";
  menu.style.display="none";
}

function bmenu5() {
  var main= document.getElementById("main5");
  var menu= document.getElementById("menu5");
  main.style.display="none";
  menu.style.display="block";
}

function bback5() {
  var main= document.getElementById("main5");
  var menu= document.getElementById("menu5");
  main.style.display="block";
  menu.style.display="none";
}


function bmenu6() {
  var main= document.getElementById("main6");
  var menu= document.getElementById("menu6");
  main.style.display="none";
  menu.style.display="block";
}

function bback6() {
  var main= document.getElementById("main6");
  var menu= document.getElementById("menu6");
  main.style.display="block";
  menu.style.display="none";
}


function bmenu7() {
  var main= document.getElementById("main7");
  var menu= document.getElementById("menu7");
  main.style.display="none";
  menu.style.display="block";
}

function bback7() {
  var main= document.getElementById("main7");
  var menu= document.getElementById("menu7");
  main.style.display="block";
  menu.style.display="none";
}

function sortList1() {
  var list, i, switching, b, shouldSwitch;
  list = document.getElementById("id01");
  switching = true;
  while (switching) {
    switching = false;
    b = list.getElementsByTagName("LI");
    for (i = 0; i < (b.length - 1); i++) {
      shouldSwitch = false;
      
      if (Number(b[i].innerHTML) > Number(b[i + 1].innerHTML)) {
        shouldSwitch = true;
        break;
      }
    }
    if (shouldSwitch) {
      b[i].parentNode.insertBefore(b[i + 1], b[i]);
      switching = true;
    }
  }
}

function sortList() {
  var list, i, switching, b, shouldSwitch;
  list = document.getElementById("id02");
  switching = true;
  while (switching) {
    switching = false;
    b = list.getElementsByTagName("LI");
    for (i = 0; i < (b.length - 1); i++) {
      shouldSwitch = false;

      if (Number(b[i].innerHTML) > Number(b[i + 1].innerHTML)) {
        shouldSwitch = true;
        break;
      }
    }
    if (shouldSwitch) {
      b[i].parentNode.insertBefore(b[i + 1], b[i]);
      switching = true;
    }
  }
}