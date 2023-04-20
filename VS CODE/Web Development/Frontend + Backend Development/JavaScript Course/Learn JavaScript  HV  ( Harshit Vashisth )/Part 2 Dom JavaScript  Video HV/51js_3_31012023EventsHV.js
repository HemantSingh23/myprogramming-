



console.log("51js_3");



// // // Introduction To Events ==>
//
// Three way to add events
//
// 1. onclick() method => directly use in html file, see in learn more 
//                       button in html page
//
// 2. onclick() method in the javascript file
//
// 3. addEventListener() method ==> best method
//
// addEventListener(argument1, argument2)
// here argument1 is the any event and argument2 is the any function
//







// // // 2. onclick() method  ===>
// // // the below method is not good because we can't assing onclick
// // // more than one times
//
// const btn = document.querySelector(".btn-headline") ;
// console.log(btn) ;
// btn.onclick = function(){
//     console.log("from JavaScript method 2, You clicked me") ;
// }


// // // // 3. addEventListener() method ===> best method


// // 1st way ==>
//
// const btn = document.querySelector(".btn-headline") ;
// console.log(btn) ;
// function clickMe()
// {
//     console.log("from addEventListener() method 3, 1st way You clicked me") ;
// }
// btn.addEventListener("click",clickMe) ; 
// btn.addEventListener("click",clickMe()) ; // we can't do this otherwise
// // it directly call it so click event will not work

// // 2nd way ==>
//
// const btn = document.querySelector(".btn-headline") ;
// console.log(btn) ;

// // btn.addEventListener("click",function ()
// // {
// //     console.log("from addEventListener() method 3, 2nd way You clicked me") ;
// // }) ; 

// btn.addEventListener("click", () => {
//     console.log("from addEventListener() method 3, 2nd way You clicked me") ;
// }) ; 





// // // // // // this keyword ==>


const btn = document.querySelector(".btn-headline") ;
console.log(btn) ;


// //  value of this  is equal to the button
// btn.addEventListener("click",function ()
// {
//     console.log("this keyword,  You clicked me from simple function") ;
//     console.log("value of this") ;
//     console.log(this) ; 
// }) ; 


// //  value of this  is equal to the window
btn.addEventListener("click", () => {
    console.log("this keyword, You clicked me from arrow function") ;
    console.log("value of this") ;
    console.log(this) ; 
}) ; 




































