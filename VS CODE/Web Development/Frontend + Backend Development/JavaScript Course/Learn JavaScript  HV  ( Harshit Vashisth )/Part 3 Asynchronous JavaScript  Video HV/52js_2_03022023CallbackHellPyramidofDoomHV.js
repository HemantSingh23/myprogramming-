
console.log("52js_2") ;



// // // Callback Hell And Pyramid Of Doom  ===>



// // //  if we want to change the text and color of heading
// // //  after 1 seconds then change the next heading after
// // //  1 seconds of previous heading then below method is 
// // //  not work good because below method 

// const heading1 = document.querySelector(".heading1") ;
// const heading2 = document.querySelector(".heading2") ;

// setTimeout(()=>{
//     heading1.textContent = "Heading 1" ;
//     heading1.style.color = "violet" ;
// },1000) ;

// setTimeout(()=>{
//     heading2.textContent = "Heading 2" ;
//     heading2.style.color = "purple" ;
// },2000) ;


// // //  it is better method than above ==>

// const heading1 = document.querySelector(".heading1") ;
// const heading2 = document.querySelector(".heading2") ;

// setTimeout(()=>{
//     heading1.textContent = "Heading 1" ;
//     heading1.style.color = "violet" ;

//     setTimeout(()=>{
//         heading2.textContent = "Heading 2" ;
//         heading2.style.color = "purple" ;
//     },1000) ;

// },1000) ;






// // // // // // // // //   Callback hell  and Pyramid of Doom  =====>
//
// where we call callback inside the callback is callback hell and shape is 
// called pyramid of Doom
//
//



// // // //   Task ===>  

// Text     Delay     Color
// 
// one       1s        violet
// Two       2s        purple
// Three     2s        red
// Four      1s        pink
// Five      2s        green
// Six       3s        blue
// Seven     1s        brown
//


// // // // 1st way ==>

// const heading1 = document.querySelector(".heading1") ;
// const heading2 = document.querySelector(".heading2") ;
// const heading3 = document.querySelector(".heading3") ;
// const heading4 = document.querySelector(".heading4") ;
// const heading5 = document.querySelector(".heading5") ;
// const heading6 = document.querySelector(".heading6") ;
// const heading7 = document.querySelector(".heading7") ;

// setTimeout(()=>{
//     heading1.textContent = "one " ;
//     heading1.style.color = "violet" ;

//     setTimeout(()=>{
//         heading2.textContent = "two " ;
//         heading2.style.color = "purple" ;

//         setTimeout(()=>{
//             heading3.textContent = "Three" ;
//             heading3.style.color = "red" ;

//             setTimeout(()=>{
//                 heading4.textContent = "Four " ;
//                 heading4.style.color = "pink" ;

//                 setTimeout(()=>{
//                     heading5.textContent = "Five" ;
//                     heading5.style.color = "green" ;

//                     setTimeout(()=>{
//                         heading6.textContent = "Six " ;
//                         heading6.style.color = "blue" ;

//                         setTimeout(()=>{
//                             heading7.textContent = "Seven" ;
//                             heading7.style.color = "brown" ;
//                         },1000) ;
//                     },3000) ;
//                 },2000) ;
//             },1000) ;
//         },2000) ;
//     },2000) ;
// },1000) ;

// // // the above is called the callback hell  and  pyramid of Doom




// // // // 2nd way ==>
// // // // 2nd way ==>
// // // // 2nd way ==>

// // //  Now we will do the above work using function()  ===>

// const heading1 = document.querySelector(".heading1") ;
// const heading2 = document.querySelector(".heading2") ;
// const heading3 = document.querySelector(".heading3") ;
// const heading4 = document.querySelector(".heading4") ;
// const heading5 = document.querySelector(".heading5") ;
// const heading6 = document.querySelector(".heading6") ;
// const heading7 = document.querySelector(".heading7") ;

// function changeText(element, text, color, time, onSuccessCallback)
// {
//     setTimeout(()=>{
//         if(element) // check if element is exist then true otherwise false
//         {
//             element.textContent = text ;
//             element.style.color = color ;
//             if(onSuccessCallback)
//             onSuccessCallback() ;
//         }
//         else console.log("Your element does not exist ") ;

//     },time) ;
// }

// changeText(heading1, "one", "orange", 1000 , ()=>{
//     changeText(heading2, "two", "purple", 1000 , ()=>{
//         changeText(heading3, "three", "red", 1000 , ()=>{
//             changeText(heading4, "four", "pink", 1000 , ()=>{
//                 changeText(heading5, "five", "green", 1000 , ()=>{
//                     changeText(heading6, "six", "blue", 1000 , ()=>{
//                         changeText(heading7, "seven", "brown", 1000 , ()=>{

//                         });
//                     });
//                 });
//             });
//         });
//     });
// });






// // // // 3rd way ==>
// // // // 3rd way ==>
// // // // 3rd way ==>


// // // // if we pass such event which is not exit so we want to print it
// // // //  using calling another function then we pass one another function


const heading1 = document.querySelector(".heading1") ;
const heading2 = document.querySelector(".heading2") ;
const heading3 = document.querySelector(".heading3") ;
const heading4 = document.querySelector(".heading4") ;
const heading5 = document.querySelector(".heading5") ;
const heading6 = document.querySelector(".heading6") ;
const heading7 = document.querySelector(".heading7") ;

function changeText(element, text, color, time, onSuccessCallback, onFailureCallback)
{
    setTimeout(()=>{
        if(element)
        {
            element.textContent = text ;
            element.style.color = color ;
            if(onSuccessCallback)
            onSuccessCallback() ;
        }
        else
        {
            if(onFailureCallback)
            onFailureCallback();
        }

    },time) ;
}

changeText(heading1, "one", "orange", 1000 , ()=>{
    changeText(heading2, "two", "purple", 1000 , ()=>{
        changeText(heading3, "three", "red", 1000 , ()=>{
            changeText(heading4, "four", "pink", 1000 , ()=>{
                changeText(heading5, "five", "green", 1000 , ()=>{
                    changeText(heading6, "six", "blue", 1000 , ()=>{
                        changeText(heading7, "seven", "brown", 1000 , ()=>{

                        },  ()=> {console.log("Heading 1 does not exist") }  );
                    },  ()=> {console.log("Heading 2 does not exist") }  );
                },  ()=> {console.log("Heading 3 does not exist") }  );
            },  ()=> {console.log("Heading 4 does not exist") }  );
        },  ()=> {console.log("Heading 5 does not exist") }  );
    },  ()=> {console.log("Heading 6 does not exist") }  );
},  ()=> {console.log("Heading 7 does not exist") }  );
























