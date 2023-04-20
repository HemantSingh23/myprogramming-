

console.log("50js_3");


// // // Also see below dimensions of element


// // // // // // //   static list and live list ===>
//
//  querySelectorAll gives us the static node list
//  getElementsSomething give us the live node list


// // // / // static node list ==>
// const listItems = document.querySelectorAll(".todo-list li") ;
// console.log(listItems) ; // it print nodelist of 5
// const sixthLi = document.createElement("li") ;
// sixthLi.textContent = "item 6" ;
// const ul = document.querySelector(".todo-list") ;
// ul.append(sixthLi) ;
// console.log(listItems) ; // after append it still print nodelist of 5
// // // beacuse it is a static node list


// // // / //  Live  node list ==>
const ul = document.querySelector(".todo-list") ;
const listItems = ul.getElementsByTagName("li") ;
console.log(listItems) ; // it print nodelist of 5
const sixthLi = document.createElement("li") ;
sixthLi.textContent = "item 6" ;
ul.append(sixthLi) ;
console.log(listItems) ; // after append it still print nodelist of 6
// // beacuse it is a live node list








// // // // // //   how to get dimensions of element ===>


const sectionTodo = document.querySelector(".section-todo") ;
// const info = sectionTodo.getBoundingClientRect() ;
// const info = sectionTodo.getBoundingClientRect().height ;
// const info = sectionTodo.getBoundingClientRect().left ;
const info = sectionTodo.getBoundingClientRect().top ;
console.log(info) ;


















