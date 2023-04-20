
console.log("27JS") ;



//  // Map Method ==>

// Map callback function should return array


// also see the filter method below




const numbers = [3,4,6,1,8] ; 


//  //  1st way

const square = function(number)
{
    // console.log( number * number ) ; // if we do this then
    // by default it return undefined so in the console.log
    // below it print array of undefined
    // that't why when we use map function then we definetly
    // return something
    
    return number * number ;
}

const squareNumber = numbers.map(square) ;
console.log(squareNumber) ;  // print  [ 9, 16, 36, 1, 64 ]



//  //  2nd way

const squareNumber1 = numbers.map( function(number) {
    return number * number ;
}) ;
console.log(squareNumber1) ;  // print  [ 9, 16, 36, 1, 64 ]



//  //  3rd way

const squareNumber2 = numbers.map( (number) => {
    return number * number ;
}) ;
console.log(squareNumber2) ;  // print  [ 9, 16, 36, 1, 64 ]







// // Store the firstName of an object in array   ==>

const users = [
    {firstName : "Hemant", age : 22 },
    {firstName : "Ashish", age : 17 },
    {firstName : "Pushpendra", age : 23 },
    {firstName : "Aditya", age : 18 }
]

const userNames = users.map((user) => {
    return user.firstName ;
})
console.log(userNames) ;





///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




//  //  filter method ==>

// filter callback function should return true or false 


const numbers1 = [1,3,2,6,4,8] ;


//  // 1st way =>
const isEven = function(number)
{
    return number%2===0 ;   
}

const evenNumbers = numbers.filter(isEven) ;
console.log(evenNumbers) ;



//  // 2nd way =>
const evenNumbers1 = numbers.filter(function(number) {
    return number%2===0 ;   
}) ;
console.log(evenNumbers1) ;



//  // 3rd way =>
const evenNumbers2 = numbers.filter( (number) => {
    return number%2===0 ;   
}) ;
console.log(evenNumbers2) ;















