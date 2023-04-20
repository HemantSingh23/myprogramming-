


const getColor = () => {
    // color code is hex code 
    const randomNumber = Math.floor(Math.random() * 16777215) ;
    // console.log(randomNumber);
    const randomCode = "#" + randomNumber.toString(16) ;  // 16 stand for hexadecimal code
    // console.log(randomNumber , randomCode);

    document.body.style.backgroundColor = randomCode ;

    document.getElementById("colorCode").innerText =  randomCode ;

    navigator.clipboard.writeText(randomCode);
    // As we click in the "Click Me" button immediately the hex code will be copied to the clipboard
}

document.getElementById("btn").addEventListener("click", 

    getColor
    
)

getColor(); // when we refresh the page then immediately 
// this function will call