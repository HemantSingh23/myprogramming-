

// connect the html file 55js_1_05022023

console.log("56js_1 ");

// //  JSON = JavaScript Object Notation

//
// // we have three most common ways to create and send request to server
//
//  1.    xmlHTTPRequest   (old way of doing) 
//  2.    fetch API   (onewld way of doing) 
//  3.    axios   (this is third party library) 
//
//
// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// //  readystate Value    State	                Description                                              
//            0	           UNSENT	             Client has been created. open() not called yet.
//            1	           OPENED	             open() has been called.
//            2	           HEADERS_RECEIVED	     send() has been called, and headers and status are available.
//            3	           LOADING	             Downloading; responseText holds partial data.
//            4	           DONE	                 The operation is complete.
//
//
// here we will take 4 because when readystate value is 4 then 
// operation is done so we will get response




const URL =  "https://jsonplaceholder.typicode.com/posts"   ;
const xhr = new XMLHttpRequest() ;
// console.log(xhr) ; // it print the xhr object
   

// // //  step 1 => 

console.log(xhr.readyState) ; // print 0 // when open is not call

xhr.open("GET", URL) ;// it is asynchronous means it is done by browser in background

console.log(xhr.readyState) ; // print 1 // when open is called

// xhr.onreadystatechange = function()
// {
//     console.log("Inside onreadystatechange  ==> "); 
//     // console.log(xhr) ;
//     console.log(xhr.readyState) ; // prinr 2 and 3  and 4

//     if(xhr.readyState === 4) // here we take 4 because when 4 then operation is done so we can get response
//     {
//         // console.log(xhr); 
//         // console.log(xhr.readyState);  // print 4
//         // console.log(xhr.response); 
//         // console.log(typeof xhr.response);  // print string
 
//         // //  now we convert the typeof response,  string to object
//         //
//         const response = xhr.response ;
//         const data = JSON.parse(response); // it parse the JSON and
//         // convert the response into object
//         console.log(data) ;
//         console.log(typeof data) ; // print object
//     }
// }



// // //  we can also do the above things using onload because
// // // onload run only when readystate value is equal to 4

xhr.onload = function()
{
    console.log("Inside onload   ==> "); 
    console.log(xhr.readyState) ; // print  4

    // //  now we convert the typeof response,  string to object

    const response = xhr.response ;
    const data = JSON.parse(response);
    console.log(data) ;
    console.log(typeof data) ; // print object
    
}

xhr.send();

























 













































































