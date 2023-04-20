

// connect the html file 55js_1_05022023

console.log("57js ");


// // // // //    Error handing    ==>
//

// All HTTP response status codes are separated into five classes or 
// categories. The first digit of the status code defines the class 
// of response, while the last two digits do not have any classifying 
// or categorization role. There are five classes defined by the 
// standard :=>

// 1xx informational response – the request was received, continuing process
// 2xx successful – the request was successfully received, understood, and accepted
// 3xx redirection – further action needs to be taken in order to complete the request
// 4xx client error – the request contains bad syntax or cannot be fulfilled
// 5xx server error – the server failed to fulfil an apparently valid request



// const URL =  "https://jsonplaceholder.typicode.com/posts"   ;
// const xhr = new XMLHttpRequest() ;
// console.log(xhr) ; // it print the xhr object

// xhr.open("GET", URL) ;
// xhr.onload = () =>
// {
//     if(xhr.status>=200 && xhr.status<300)
//     {
//         const data = JSON.parse(xhr.response);
//         console.log(data) ;
//     }
//     else // run if we do somthing wrong like in URL we write incorrect
//     {
//         console.log("Something went wrong") ;
//     }
// }


// // // it will run either internet disconnect or we can't reach to server
// xhr.onerror = () =>{
//     console.log("Network Error") ;
// }


// xhr.send();







////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


const URL =  "https://jsonplaceholder.typicode.com/posts"   ;
const xhr = new XMLHttpRequest() ;
xhr.open("GET", URL) ;
xhr.onload = () =>
{
    if(xhr.status>=200 && xhr.status<300)
    {
        const data = JSON.parse(xhr.response);

        const data3 = data[3] ;
        console.log(data3); // print whole data[3] object
 
        const id = data[3].id ;
        // console.log(id) ; // print 4 which is id of data[3]

        // now we request this id from the above URL
        const URL2 =  ` ${URL}/${id} ` ;   // https://jsonplaceholder.typicode.com/posts/id ;
        // console.log(URL2) ;
        const xhr2 = new XMLHttpRequest() ;
        xhr2.open("GET",URL2) ;
        xhr2.onload = () =>{
            const data2 = JSON.parse(xhr2.response);
            console.log(data2) ;
        }
        xhr2.send();

    }
    else // run if we do somthing wrong like in URL we write incorrect
    {
        console.log("Something went wrong") ;
    }
}

// // // it will run either internet disconnect or we can't reach to server
xhr.onerror = () =>{
    console.log("Network Error") ;
}

xhr.send();

























 













































































