

console.log("49js_3");




 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// to find all classes 

const sectionTodo = document.querySelector(".section-todo") ;
console.log(sectionTodo.classList) ; //  

sectionTodo.classList.add('bg-dark') // i add this class in the css also

// sectionTodo.classList.remove("container") // it remove the container class


// // // to check any class exits in the page or not
const ans = sectionTodo.classList.contains("container") ;
console.log(ans) ; // print true because container class is present


// // toggle => if any class is not present then it add that class
// // or if any class is present then it remove that class
sectionTodo.classList.toggle("bg-dark");


//////////////////////////////////////////////////////////////////

const header = document.querySelector(".header") ;
console.log(header.classList) ;
header.classList.add("bg-dark"); // add bg-dark class in the header




/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// //   add another html element

// const todoList = document.querySelector(".todo-list") ;
// console.log(todoList.innerHTML) ; //  
// // todoList.innerHTML = "<li> New Todo </li>"  // it change existing html

// // // the below will add a new html element
// // todoList.innerHTML = todoList.innerHTML +  "<li> New Todo </li>"  
// todoList.innerHTML +=  "<li> New Todo </li>"  
// todoList.innerHTML +=  "<li> Study Hard </li>"  
 

// // // //  the above methdo innerHTML should not use
// // // //  use the below method



// // // // // createElement() ====>

// // append and appendChild are same but appendChild is old
// // method and append is a new method

// const newTodoItem = document.createElement("Li") ;

// // const newTodoItemText = document.createTextNode("Study Too Hard and smartly") ;
// // newTodoItem.append(newTodoItemText) ;
// // // // below and above are same
// newTodoItem.textContent =  "Study Too Hard and smartly" ; 

// const todoList = document.querySelector(".todo-list") ;

// // todoList.append(newTodoItem) ; // it add in the last
// todoList.prepend(newTodoItem) ; // it add  in the starting

// console.log(newTodoItem) ; //  
// // todoList.innerHTML = "<li> New Todo </li>"  // it change existing html



// // // // // // to remove   =====>

// const todo1 = document.querySelector(".todo-list li") ;
// console.log(todo1) ; //  print the  todo1
// todo1.remove();
// console.log(todo1) ; // it also print todo1 even after removing it
// // because it print this from the above line






// // // //  in the above we are adding inside the ul tag
// // // // if we want to add before and after ul tag then
//
// // we use before and after method

// const newTodoItem = document.createElement("Li") ;
// newTodoItem.textContent =  "Study Too Hard and smartly" ; 
// const todoList = document.querySelector(".todo-list") ;

// // todoList.before(newTodoItem) ; // 
// // todoList.after(newTodoItem) ; // 






// // // // // another method 

// beforeBegin // act like before 
// afterBegin  // act like prepend
// beforeEnd   // act like append
// afterEnd    // act like after

// const todoList = document.querySelector(".todo-list") ;
// todoList.insertAdjacentHTML("beforeBegin", "<li> New Todo </li>" ) ;






// // // // clone nodes =====>


// const ul = document.querySelector(".todo-list") ;
// const li = document.createElement("li") ;
// li.textContent = "new todo" ;

// // // in below written code append() or prepend() only one work
// // ul.append(li) ;
// // ul.prepend(li) ;
 
// // to use both  append() or prepend() we clone the node
// // const li2 = li.cloneNode() ; // it clone but text will not clone
// const li2 = li.cloneNode(true) ; // it clone everything 
// // // //  it is called deep clone
// ul.append(li) ;
// ul.prepend(li) ;






// // // // // Some old methods to support poor Internet Exploler
//
// appendChild
// insertBefore
// replaceChild
// removeChild


// // // //  appendChild()   ======>
//
// const ul1 = document.querySelector(".todo-list") ;
// const li1 = document.createElement("li") ;
// li1.textContent = "new todo old method" ;
// ul1.appendChild(li1) ;


// // // //  insertBefore()   ======>
// //
// const ul1 = document.querySelector(".todo-list") ;
// const li1 = document.createElement("li") ;
// const referenceNode = document.querySelector(".first-todo") ;
// li1.textContent = "new todo old method" ;
// ul1.insertBefore(li1, referenceNode) ;
// // //  here we insert li1 before referenceNode



// // // //  replaceChild()   ======>

// const ul1 = document.querySelector(".todo-list") ;

// const li1 = document.createElement("li") ;
// li1.textContent = "new todo old method" ;

// const referenceNode = document.querySelector(".first-todo") ;
// ul1.replaceChild(li1, referenceNode) ;
// // // //  here we replace li1 from referenceNode




// // // // //  removeChild()   ======>
// //
const ul1 = document.querySelector(".todo-list") ;
const li1 = document.createElement("li") ;
li1.textContent = "new todo old method" ;
const referenceNode = document.querySelector(".first-todo") ;
ul1.removeChild(referenceNode) ;
// //  here we remove referenceNode









// // // // // // //   static list and live list ===>



































