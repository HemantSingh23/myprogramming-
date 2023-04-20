

console.log("56js_3  ==>  Complete Todo List Project");



// // // // // // // Complete Todo List Project  ====>




const todoForm = document.querySelector(".form-todo") ;
// console.log(todoForm) ;

const todoInput = document.querySelector(".form-todo input[type='text']") ;
// console.log(todoInput) ;

const todoList = document.querySelector(".todo-list") ;


todoForm.addEventListener("submit", (e) =>{
    // console.log("form submit ") ;

    e.preventDefault(); // here e ,  event prevent the page from
    // refreshing after clicking on the ""Add Todo""  or enter
    // button on  html page

    
    // console.log(todoInput.value) ; // the text we typed on the form
    // // and when we click ""Add Todo""  or enter button then
    // // it print in the console 
    //
    // todoInput.value = "" ; // after print in the above form will 
    // // be clear

    const newTodoText = todoInput.value ;
    const newLi = document.createElement("li") ;

    const newLiInnerHTML =  `
    <span class="text"> ${newTodoText}</span>
    <div class="todo-button">
        <button class="todo-btn done">Done</button>
        <button class="todo-btn remove">Remove</button>
    </div>
    `  ;

    newLi.innerHTML = newLiInnerHTML ;
    // console.log(newLi) ;

    todoList.append(newLi) ;

    todoInput.value = "" ;

})



// // // for Done and Remove button we use event delegation
// // // on the ul tag directly  using click event   
//
//     
//
todoList.addEventListener("click", (e)=>{
    // console.log(e.target) ; // here we will get what we click using

    if(e.target.classList.contains("remove"))
    {
        // console.log("You want to remove something")
        const targetLi = e.target.parentNode.parentNode ;
        // console.log(targetLi) ;
        targetLi.remove();
    }

    if(e.target.classList.contains("done"))
    {
        // console.log("Great !!  You want to add something")
        const liSpan = e.target.parentNode.previousElementSibling ;
        // console.log(liSpan) ;  // print span tag (Do this do that)
        liSpan.style.textDecoration = "line-through"
    }
})
 



// // /// // //  JavaScript Part 2 video  Completed
// // /// // //  JavaScript Part 2 video  Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//   Project Completed    Project Completed    Project Completed    Project Completed    Project Completed    Project Completed 
//   Project Completed    Project Completed    Project Completed    Project Completed    Project Completed    Project Completed 
//   Project Completed    Project Completed    Project Completed    Project Completed    Project Completed    Project Completed 
//   Project Completed    Project Completed    Project Completed    Project Completed    Project Completed    Project Completed 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// // /// // //  JavaScript Part 2 video  Completed
// // /// // //  JavaScript Part 2 video  Completed
// // /// // //  JavaScript Part 2 video  Completed
// // /// // //  JavaScript Part 2 video  Completed

// // /// // //  JavaScript Part 2 video  Completed
// // /// // //  JavaScript Part 2 video  Completed
// // /// // //  JavaScript Part 2 video  Completed
// // /// // //  JavaScript Part 2 video  Completed

// // /// // //  JavaScript Part 2 video  Completed
// // /// // //  JavaScript Part 2 video  Completed
// // /// // //  JavaScript Part 2 video  Completed
// // /// // //  JavaScript Part 2 video  Completed















































































