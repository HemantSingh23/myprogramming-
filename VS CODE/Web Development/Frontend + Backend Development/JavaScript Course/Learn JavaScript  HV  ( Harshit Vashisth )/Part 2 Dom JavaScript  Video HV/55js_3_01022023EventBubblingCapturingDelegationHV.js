

console.log("55js_3");




// // // // // // // Event Bubbling and Event Capturing ====>


// // // Event Bubbling or Propagation ====> 
//
// if we use click event on the child and if we click on the 
// child then browser check whether parent has click event or not
// and if parent has then browser automatically call the 
// callback() function of parent and in both (child and parent)
// event will be occured 

// means if child and parent has same event and if we click on 
// the child then parent events will also occure
//
//
//


// const body = document.body ;
// const grandparent = document.querySelector(".grandparent") ;
// const parent = document.querySelector(".parent") ;
// const child = document.querySelector(".child") ;

// child.addEventListener("click", ()=>{
//     console.log("Child , You Clicked child") ;
// })

// parent.addEventListener("click", ()=>{
//     console.log("Parent, You Clicked parent") ;
// })

// grandparent.addEventListener("click", ()=>{
//     console.log("GrandParent, You Clicked grandparent") ;
// })

// body.addEventListener("click", ()=>{
//     console.log("Body, You Clicked body") ;
// })





// // // Event Capturing    ====> 
//
// here we also take a boolean value so we can decide
// whether we capture this event or not
//
// if boolean value is true then we capture the event
//
//


// const body = document.body ;
// const grandparent = document.querySelector(".grandparent") ;
// const parent = document.querySelector(".parent") ;
// const child = document.querySelector(".child") ;

// child.addEventListener("click", ()=>{
//     console.log("Capture , Child") ;
// }, true)

// parent.addEventListener("click", ()=>{
//     console.log("Capture , Parent") ;
// }, true)

// grandparent.addEventListener("click", ()=>{
//     console.log("Capture , GrandParent") ;
// }, true)

// body.addEventListener("click", ()=>{
//     console.log("Capture , Body") ;
// }, true)



// child.addEventListener("click", ()=>{
//     console.log("Bubbling , Child") ;
// })

// parent.addEventListener("click", ()=>{
//     console.log("Bubbling , Parent") ;
// })

// grandparent.addEventListener("click", ()=>{
//     console.log("Bubbling , GrandParent") ;
// })

// body.addEventListener("click", ()=>{
//     console.log("Bubbling , Body") ;
// })





// // // Event Delegation    ====> 
//
// here we use event in the parent or grandparent then
// if we click on the child then then also parent or grandparent
// event will be occured , this is called event delegation
//


// const body = document.body ;
// const grandparent = document.querySelector(".grandparent") ;
// const parent = document.querySelector(".parent") ;
// const child = document.querySelector(".child") ;

// grandparent.addEventListener("click", ()=>{
//     console.log("Bubbling , GrandParent") ;
// })


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



// // // // //  
// if we want what we click , that's what we get ==>
// means as given below we use event in grandparent but
// if we click in child then we get child  or if we click on
// parent then we get parent
//

const body = document.body ;
const grandparent = document.querySelector(".grandparent") ;
const parent = document.querySelector(".parent") ;
const child = document.querySelector(".child") ;

grandparent.addEventListener("click", (e)=>{

    // console.log(e) ; 
    // console.log(e.target) ;  // print in which we click

    console.log(e.target.textContent) ; // if we click on grandparent then  grandparent
    // parent  child all three will be print 
    // if we click on parent then parent and child both print
    // if we click on the child then only child print
    // if we click on body then no thing print
})
















































