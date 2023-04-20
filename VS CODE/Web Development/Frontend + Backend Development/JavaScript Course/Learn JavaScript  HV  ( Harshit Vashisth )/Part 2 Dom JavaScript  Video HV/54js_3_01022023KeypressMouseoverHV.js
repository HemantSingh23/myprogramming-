

console.log("54js_3");



// // // //  Keypress Event And Mouseover Event ====>


// //  Keypress Event ====> if we press any key on keyboard
// //               

const body = document.body ;
body.addEventListener("keypress", (e)=>{
    // console.log(e) ;
    console.log(e.key) ;
})





// //  Mouseover Event ====> 
// //               

const mainButton = document.querySelector(".btn-headline") ;
mainButton.addEventListener("mouseover", ()=>{
    console.log("mouseover event occure") ;
})

mainButton.addEventListener("mouseleave", ()=>{
    console.log("mouseleave, You just leave the button ") ;
})
























































































