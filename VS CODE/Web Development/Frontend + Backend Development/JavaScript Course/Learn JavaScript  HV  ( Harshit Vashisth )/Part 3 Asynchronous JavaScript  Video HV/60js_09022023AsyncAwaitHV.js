

// connect the html file 55js_1_05022023

console.log("60js ");


// // // // //    Async Await   ==>
//
// using async await we can remove .then from the fetch()
//
// if we use async before any function then that function always
// return the promise

// the below code run asynchronously


console.log("Script Started") ;

const URL =  "https://jsonplaceholder.typicode.com/posts"   ;


// // // // // Using normal Function  ==>
//
// async function getPosts()
// {
//     const response = await fetch(URL);
//     // console.log(response) ;  // when we call it print the response
//     if(!response.ok)
//     {
//         throw new Error ("Something Went Wrong ") ;
//     }
//     const data = await response.json();
//     // console.log(data) ; // print the data
//     return data ;
// }

// const returned = getPosts() ;
// console.log(returned) ;  // print  promise


// // // // // Using arrow Function  ==>
//
const getPosts = async () =>{
    const response = await fetch(URL);
    // console.log(response) ;  // when we call it print the response
    if(!response.ok)
    {
        throw new Error ("Something Went Wrong ") ;
    }
    const data = await response.json();
    // console.log(data) ; // print the data
    return data ;
}
// console.log(getPosts()) ;  // print  promise

getPosts() 
    .then((myData) =>{
        console.log(myData) ;
    })
    .catch(error =>{
        console.log("Inside Catch");
        console.log(error);
    })

console.log("Script End") ;




// fetch(URL)
//     .then(response =>{ 
//         if(response.ok) // if response.ok is true 
//         {
//             return response.json() ;
//         }
//         else
//         {
//             throw new Error ("Something Went Wrong ") ;
//         }
//     })
//     .then(data =>{ // here instead of data we write xyz or anyother
//         console.log(data) ; // now this gives us the requied data of json file 
//     })
//     .catch(error =>{
//         console.log("Inside Catch");
//         console.log(error);
//     }) ;














 













































































