

console.log("52js_2");



// // // // // // Also see Events Objects and small projects below 

// // // // // //   Click Events on Multiple Buttons ==>



// const firstButton = document.querySelector("#one") ;
// firstButton.addEventListener("click", function()
// {
//     console.log("You Clicked button one ")
// })


// const allButton = document.querySelectorAll("button") ;
// const allButton = document.querySelectorAll(".my-buttons button") ;
// console.log(allButton) ;


// for(let button of allButton )
// {
//     button.addEventListener("click", function()
//     {
//         // console.log(this) ; // here this is equal to button we clicked
//         console.log(this.textContent) ; 
//     })
//
//  // // // // here we can't use arrow function because here this is
//  // // // // equal to window
//     // button.addEventListener("click", () =>{
//     //     // console.log(this) ;  // here this is eual to window
//     //     console.log(this.textContent) ;  // print undefined
//     // })
// }


// for(let i =0; i<allButton.length; i++)
// {
//     allButton[i].addEventListener("click", function()
//     {
//         console.log(this.textContent) ; 
//     })
// }


// allButton.forEach(function(button)
// {
//     button.addEventListener("click", function()
//     {
//         console.log(this.textContent) ; 
//     })
// })


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



// // // // // Events Object ====>

console.log(" Events Object ====>   ")


// const firstButton1 = document.querySelector("#one") ;
// firstButton1.addEventListener("click", function()
// {
//     console.log(this) ;
// })

//
// when we use addEventListeneer in any element then 
// normal js engine execute it line line
// browser has js engine as well as some more features like webApi 
//
// so browser everytime see  every element and when we perform any event
// which we listen  then browser  give two things
// 1. callback() function to the js engine
// 2. and the information of event occured with callback() function
//
// and this information is provided in the form of the object
// let the object is abc  or e or event
// 

// const firstButton2 = document.querySelector("#one") ;
// firstButton2.addEventListener("click", function(e)
// {
//     console.log(e) ;
// })





// const allButton1 = document.querySelectorAll(".my-buttons button") ;
// for(let button1 of allButton1 )
// {
//     button1.addEventListener("click", function(e)
//     {
//         // console.log(this) ; 
//         // console.log(this.textContent) ; 
//         // console.log(e) ; 
//         // console.log(e.target) ; 
//         console.log(e.currentTarget) ; 
//         // //  here target and currentTarget both are same
//         // console.log(e.currentTarget.textContent) ; 
//     })
// }


 
// console.log("Script Start ===>") ;

// const allButton2 = document.querySelectorAll(".my-buttons button") ;
// allButton2.forEach((button2) =>{
//     button2.addEventListener("click", function(e)
//     {
//         let num =0;
//         for(let i =0; i<=1000000000; i++)
//         {
//             num += i ;
//         }
//         console.log(e.currentTarget.textContent, num) ; 
//     })
// }) 

// let outerVar = 0;
// for(let i =0; i<=1000000000; i++)
// {
//     outerVar += i ;
// }
// console.log("Value of outerVar is  ", outerVar) ;
// console.log("Script End ") ;

 

// // // on cliccking the button make button background yellow

console.log("Task =>  make button background  --> ") ;

// // // on cliccking the button make button background yellow

const allButton3 = document.querySelectorAll(".my-buttons button") ;
allButton3.forEach((button3) =>{
    button3.addEventListener("click", function(e)
    {
        console.log(e.target.textContent) ; 
        e.target.style.backgroundColor = "yellow" ;
        e.target.style.color = "#333" ;
    })
}) 




// // // // // // //   Lets make a small Project ====>
console.log("Small Project =====> ") ;




























