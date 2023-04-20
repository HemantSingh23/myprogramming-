

console.log("53js_3");




// // // // // // //   Lets make a small Project ====>
console.log("Small Project =====> ") ;


const mainbutton = document.querySelector("button") ;
const body = document.body ;  
const currentColor = document.querySelector(".current-color") ;


function randomColorGenerator()
{
    const red = Math.floor(Math.random() * 256 ) ;
    const green = Math.floor(Math.random() * 256 ) ;
    const blue = Math.floor(Math.random() * 256 ) ;

    const randomColor = ` rgb(${red}, ${green}, ${blue}) `  ;
    return randomColor ;
}
  
mainbutton.addEventListener("click", ()=>{
    const randomColor = randomColorGenerator() ;
    // console.log(randomColor) ;
    body.style.backgroundColor = randomColor ;
    currentColor.textContent = randomColor ;
      
})
























