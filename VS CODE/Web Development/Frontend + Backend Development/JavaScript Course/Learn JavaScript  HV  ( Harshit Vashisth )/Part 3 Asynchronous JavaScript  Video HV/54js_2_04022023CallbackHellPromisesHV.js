

// connect the html file 54js_1_04022023

console.log("54js ");


// // // // //  Callback Hell and Promises ===>
//
// here we do the same thing which we done in the
// 52js_2 file but using promises which is a 
// better method than that 




const heading1 = document.querySelector(".heading1") ;
const heading2 = document.querySelector(".heading2") ;
const heading3 = document.querySelector(".heading3") ;
const heading4 = document.querySelector(".heading4") ;
const heading5 = document.querySelector(".heading5") ;
const heading6 = document.querySelector(".heading6") ;
const heading7 = document.querySelector(".heading7") ;



function changeText(element, text, color, time)
{
    return new Promise( (resolve, reject)=>{
        setTimeout(()=>{
            if(element)
            {
                element.textContent = text ;
                element.style.color = color ;
                resolve() ;
            }
            else
            {
                reject("element not found") ; 
            } // if in html any heading class is not available then it will execute
            // because catch will run

        },time) ;

    }) ;

}



// changeText(heading1, "one", "orange", 1000)
// .then( ()=>{
//     changeText(heading2, "two", "purple", 1000)
// })
// .then( ()=>{
//     changeText(heading3, "three", "red", 1000)
// })
// .then( ()=>{
//     changeText(heading4, "four", "pink", 1000)
// })
// .then( ()=>{
//     changeText(heading5, "five", "green", 1000)
// })
// .then( ()=>{
//     changeText(heading6, "six", "blue", 1000)
// })
// .then( ()=>{
//     changeText(heading7, "seven", "brown", 1000)
// })

// if we done the above then first change the heading 1 then after 1 second of change
// of heading all other 6 headings will change together
// but we want that it change after 1 seconds not s


// see the correct code below ==>
// the below code change heading1 then after 1 seconds heading2 then after 1 second
// heading 3......till   heading 7


// // // // 1st way to write array function ==>
//
// changeText(heading1, "one", "orange", 1000)
// .then( ()=>{
//     return changeText(heading2, "two", "purple", 1000)
// })
// .then( ()=>{
//     return changeText(heading3, "three", "red", 1000)
// })
// .then( ()=>{
//     return changeText(heading4, "four", "pink", 1000)
// })
// .then( ()=>{
//     return changeText(heading5, "five", "green", 1000)
// })
// .then( ()=>{
//     return changeText(heading6, "six", "blue", 1000)
// })
// .then( ()=>{
//     return changeText(heading7, "seven", "brown", 1000)
// })



// // // // 2nd way to write array function ==>
// becaause only one thing which is return so we can remove curly braces
//
changeText(heading1, "one", "orange", 1000)
.then( ()=> changeText(heading2, "two", "purple", 1000) )
.then( ()=> changeText(heading3, "three", "red", 1000) )
.then( ()=> changeText(heading4, "four", "pink", 1000) )
.then( ()=> changeText(heading5, "five", "green", 1000) )
.then( ()=> changeText(heading6, "six", "blue", 1000) )
.then( ()=> changeText(heading7, "seven", "brown", 1000) )
.catch( (error)=> alert(error) ) ;
// // if in html any heading class is not available then because catch will 
// // run so an alert will promp in the html page for that heading





















