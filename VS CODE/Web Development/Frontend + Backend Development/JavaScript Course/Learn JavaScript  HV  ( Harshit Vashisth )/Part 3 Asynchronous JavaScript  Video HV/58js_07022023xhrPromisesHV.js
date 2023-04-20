

// connect the html file 55js_1_05022023

console.log("58js ");


// // // // //    xhr with Promises   ==>
//

// // here we done the same thing which we done in the previous file
// // 




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


const URL =  "https://jsonplaceholder.typicode.com/posts"   ;

function sendRequest(method, url)
{
    return new Promise(function(resolve, reject)
    {
        const xhr = new XMLHttpRequest() ;
        xhr.open(method, url ) ;
        xhr.onload  = function()
        {
            if(xhr.status >= 200 && xhr.status <300)
            {
                resolve(xhr.responseText) ;
            }
            else
            {
                reject.apply(new Error("onload Something Went Wrong")) ;
            }
        }

// // // it will run either internet disconnect or we can't reach to server
        xhr.onerror = function(){
            reject(new Error("onerror Something Went Wrong")) ;
        }

        xhr.send() ; 
    })
  }



// const whatisthis = sendRequest("GET", URL) ;
// console.log(whatisthis); // it print promise

sendRequest("GET", URL) 
.then(response =>{
    // console.log(response) ;
    const data = JSON.parse(response) ;
    // console.log(data);
    return data ;
})
.then(data =>{
    // console.log(data) ;
    // console.log(data[3]) ; // print the whole data[3] object
    // console.log(data[3].id) ;
    const id = data[3].id ;
    return id;
})
.then( id=>{
    const url = ` ${URL}/${id} ` ;
    // console.log(url) ;
    return sendRequest("GET", url);
})
.then( newResponse =>{
    // console.log(newResponse) ;
    const newData = JSON.parse(newResponse);
    console.log(newData) ;
})
.catch(error =>{
    console.log(error) ;
})

 





















 













































































