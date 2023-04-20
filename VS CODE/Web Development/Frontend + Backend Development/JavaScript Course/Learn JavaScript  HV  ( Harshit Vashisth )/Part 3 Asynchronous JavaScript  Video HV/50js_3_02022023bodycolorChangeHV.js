
console.log("50js_3 ");


// // change the color of body of html page by setInterval()  ==>

// const body = document.body;
// console.log(body) ;
// setInterval( ()=>{
//     const red = Math.floor(Math.random() * 126 );
//     const green = Math.floor(Math.random() * 126 );
//     const blue = Math.floor(Math.random() * 126 );
//
//     const rgb = ` rgb(${red}, ${green}, ${blue}) ` ;
//     // console.log(rgb) ;
//     body.style.background = rgb ;
// },1000)


// // stop the changing the color of body of html page by setInterval()   ==>

const body = document.body;
// console.log(body) ;
const  button = document.querySelector("button") ;
const intervalId = setInterval( ()=>{
    const red = Math.floor(Math.random() * 126 );
    const green = Math.floor(Math.random() * 126 );
    const blue = Math.floor(Math.random() * 126 );

    const rgb = ` rgb(${red}, ${green}, ${blue}) ` ;
    // console.log(rgb) ;
    body.style.background = rgb ;
},500)

button.addEventListener("click", ()=>{
    clearInterval(intervalId);
    button.textContent = body.style.background ;
})

console.log(intervalId) ;































