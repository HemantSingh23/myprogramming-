

console.log("50js_3 ");



// // // // Callback() function  ===>
//
//

// function myfunc1(callback)
// {
//     console.log("Function is doing some task 1 ") ;
//     callback() ;
// }
// function myfunc2()
// {
//     console.log("Function is doing some task 2 ") ;
// }
// myfunc1(myfunc2);

// // // or

// function myfunc(callback)
// {
//     console.log("Function is doing some task 1 ") ;
//     callback() ;
// }
// myfunc(function()
// {
//     console.log("Function is doing some task 2 ") ;
// });

// // // or

// function myfunc(callback)
// {
//     console.log("Function is doing some task 1 ") ;
//     callback() ;
// }
// myfunc( ()=>{
//     console.log("Function is doing some task 2 ") ;
// });




function getTwoNumbers(number1 , number2,  callback)
{
    if(typeof number1 === "number" && typeof number2 ==="number")
    {
        console.log(number1, number2) ;
        callback(number1, number2) ;
    }
    else console.log("Wrong Data Type") ;
}

function addTwoNumbers(number1 , number2)
{
    console.log(number1 + number2) ;
}
getTwoNumbers(4,5, addTwoNumbers);  // print 4 5  and 9

getTwoNumbers("8","7", addTwoNumbers); //for this, Wrong Data Type
getTwoNumbers("8","", addTwoNumbers); //for this, Wrong Data Type



console.log("Another =====> ")


function getTwoNumbers1(number1 , number2, onSuccess, onFailure)
{
    if(typeof number1 === "number" && typeof number2 ==="number")
    {
        onSuccess(number1, number2) ;
    }
    else onFailure() ;
}

getTwoNumbers1(4,5, (num1, num2)=>{
    console.log(num1 + num2) ;
} , ()=>{
    console.log("Wrong Data Type, Please pass numbers only") ;
});
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
















