

// connect the html file 55js_1_05022023

console.log("59js ");


// // // // //    Fetch API   ==>
//

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// const URL =  "https://jsonplaceholder.typicode.com/posts"   ;


// // const whatisthis = fetch( URL) ;
// // console.log(whatisthis) ;  // print Promise

// // // because fetch(URl) is  promise so we can use then method

// fetch(URL)
//     .then(response =>{  // here instead of response we write abc or anyother
//         // console.log(response) ; // here this response it not like JSON file
//         // console.log(response.json()) ; // print promise
//         return response.json() ;
//     })
//     .then(data =>{ // here instead of data we write xyz or anyother
//         console.log(data) ; // now this gives us the requied data of json file 
//     })
//     .catch(error =>{
//         console.log("Inside Catch");
//         console.log(error);
//     })


/////////////////////////////////////////////////////////////////////////////////////////
// Now if we do some mistake like in url we write at end postssss  so
//  we get error 404 so to not get any error we can use if conditoin

// const URL =  "https://jsonplaceholder.typicode.com/postssss"   ;
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
//     })





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//

// // // // Now we use post method which create the data

const URL =  "https://jsonplaceholder.typicode.com/posts"   ;
fetch(URL, {
    method: 'POST',
    body: JSON.stringify({
      title: 'foo',
      body: 'bar',
      userId: 1,
    }),
    headers: {
      'Content-type':  'application/json; charset=UTF-8',
    },
})
    .then(response =>{ 
        if(response.ok) // if response.ok is true 
        {
            return response.json() ;
        }
        else
        {
            throw new Error ("Something Went Wrong ") ;
        }
    })
    .then(data =>{ // here instead of data we write xyz or anyother
        console.log(data) ; // now this gives us the requied data of json file 
    })
    .catch(error =>{
        console.log("Inside Catch");
        console.log(error);
    })














 













































































