

console.log("26JS") ;  



//  //  Important array method  ==>

// forEach
// map
// filter
// reduce


const numbers = [4,2,5,8] ;

function myFunc(number , index)
{
    console.log("Index is ", index) ;
    console.log(number * 2) ;
}
// myFunc(numbers[0], 0) ;


//  // iterate every element of array using for loop =>
// for(let i=0; i<numbers.length; i++)
// {
//     myFunc(numbers[i], i) ;
// }

// or 
//  // iterate every element of array using forEach method =>

numbers.forEach(myFunc) ;



// // using forEach print index and element of array  ==>
numbers.forEach(function(num , ind) 
{
    console.log(`Index is ${ind} and number is ${num}`) ;
}) 



// // using forEach we multiply every element of array by 5 ==>
numbers.forEach(function(num) 
{
    console.log(num*5) ;
}) 



// // print the firstName of an object using forEach  ==>
const users = [
    {firstName : "Hemant", age : 22 },
    {firstName : "Ashish", age : 17 },
    {firstName : "Pushpendra", age : 23 },
    {firstName : "Aditya", age : 18 }
]

users.forEach(function(user) 
{
    console.log(user.firstName) ;
}) 

//  //  //  using for of loop ==>
// for(let user of users)
// {
//     console.log(user.firstName) ;
// }




//  //   forEach and Arrow function ==>

console.log(" forEach and Arrow function  " ) ;

// users.forEach( user  => {
//     console.log(user.firstName ) ;
// }) 

users.forEach( (user, index)  => {
    console.log(user.firstName , index ) ;
}) 
    
    






















