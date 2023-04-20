


console.log("47js_3  JavaScript DOM =====> ")



//  // DOM(Document Object Model)  ==>

// everything is in the document object


//  // 1. Select element using get element by id ==>
// // it only works for id

console.log("1. Select element using get element by id ====> ") ;

document.getElementById("main-heading") ; // nothing happen

console.log(document.getElementById("main-heading") ) ;
// // it looks it return html but it return and object
// // it is a browser that represent such that it looks like html
console.log( typeof document.getElementById("main-heading") ) ;
// // the bove line print object

const mainHeading = document.getElementById("main-heading") 
console.log(mainHeading) ;




//  // 2. Select element using query selector ==>
// // it  works for id , classes  etc
//
// for id we use #(hash)
// for class we use .(full stop)

console.log("2. Select element using query selector ====>") ;

const mainHeading1 = document.querySelector("#main-heading") 
console.log(mainHeading1) ;

const header = document.querySelector(".header") 
console.log(header) ;

const navItem = document.querySelector(".nav-item") 
console.log(navItem) ; // print only 1st nav item

const navItemall = document.querySelectorAll(".nav-item") 
console.log(typeof navItemall) ; // print object
console.log(navItemall) ; // print all nav item
// here navItemall is a node list which is like array 
// but not array


const main = document.querySelector("div.headline h2") ;
console.log(main) ;



// // 3. Change Text ==> 
// // textContent and innerText
//

console.log("3. Change Text(textContent and innerText)  ====>") ;


const mainHeading2 = document.getElementById("main-heading")

console.log(mainHeading2.textContent) ; 
// // textContent give all the content whether content is hide or not
// like in above heading span is hide still it print
// hello which is written in the span

console.log(mainHeading2.innerText) ;  
// // innerText print only which is not hide 
// it not give hello which is written in span tag

mainHeading2.textContent = "This is after change , Manage your task" ;
console.log(mainHeading2.textContent) ; // 





// // 4. Change the style of elemens ==> 
//

console.log("4. Change the style of elemens  ====>") ;

const mainHeading3 = document.querySelector("div.headline h2") ;
// console.log(mainHeading3.style) ;

mainHeading3.style.color = "blue" ;
// mainHeading3.style.backgroundColor = "blue" ;


mainHeading3.style.border = "10px solid green" ;





// // 5. get and set attributes ==> 
//

console.log("5. get and set attributes  ====>") ;


const link = document.querySelector("a") ;
// console.log(link) ;
console.log(link.getAttribute("href")) ; // print #home
console.log(link.getAttribute("href").slice(1)) ; // print home

link.setAttribute("href", "https://www.google.com/")
console.log(link.getAttribute("href")) ; 




const inputElement = document.querySelector(".form-todo input") ;
console.log(inputElement.getAttribute("type")) ;






// // 6. get multiple elements using getElement by class name ==> 
// // 6. get multiple elements using getElement by Tag name ==> 
// // 6. get multiple elements using querySelectorAll ==> 


console.log("6. get multiple elements using getElement by class name  ====>") ;

const navItems = document.getElementsByClassName("nav-item") ;
console.log(navItems) ; // print html collections
// which is a array like object where indexing are present

console.log("6. get multiple elements using getElement by Tag name  ====>") ;
let navItems1 = document.getElementsByTagName("a") ;
console.log(navItems1) ; // print html collections



console.log("6. get multiple elements using querySelectorAll  ====>") ;

let navItems2 = document.querySelectorAll(".nav-item")
console.log(navItems2) ; // print node list (array like object)




//  // iteration on the elements ==>

// simple for  loop
// for of loop
// forEach loop

// we can't use forEach method to iterate through HTMLCollection
// but in node list we use forEach method

// // // // array like object -----> indexing , length property

console.log("iteration on the elements HTMLCollection ====>") ;


// for(let i =0; i<navItems1.length; i++)
// {
//     console.log(navItems1[i]) ;
//     const navItem = navItems1[i] ;
//     navItem.style.backgroundColor = "#fff" ;
//     navItem.style.color = "green" ;
//     navItem.style.fontWeight = "bold" ;
// }


// for(let navItem of navItems1)
// {
//     navItem.style.backgroundColor = "#fff" ;
//     navItem.style.color = "green" ;
//     navItem.style.fontWeight = "bold" ;
// }



//  //  //  Change the html collection into array ==>

console.log("Change the html collection into array  ====>") ;

// navItems1 = Array.from(navItems1);// change into array from HTMLCollection
// console.log(Array.isArray(navItems1)) ;  // print true





console.log("iteration on the elements Node List ====>") ;

let navItems3 = document.querySelectorAll("a")
console.log(navItems3) ; // print node list (array like object)


// for(let i =0; i<navItems3.length; i++)
// {
//     console.log("nodelist" , navItems3[i]) ;
//     const navItem = navItems3[i] ;
//     navItem.style.backgroundColor = "#fff" ;
//     navItem.style.color = "blue" ;
//     navItem.style.fontWeight = "bold" ;
// }



// for(let navItem of navItems3)
// {
//     navItem.style.backgroundColor = "#fff" ;
//     navItem.style.color = "red" ;
//     navItem.style.fontWeight = "bold" ;
// }


navItems3.forEach((navItem) =>{
    navItem.style.backgroundColor = "#fff";
    navItem.style.color = "purple" ;
    navItem.style.fontWeight = "bold" ;
})




// // 7. innerHTML ==> 


console.log("7. innerHTML  ====>") ;

const headline = document.querySelector(".headline") ;
console.log(headline) ;
console.log(headline.innerHTML) ;

headline.innerHTML = "<h1>Inner HTML changed from JavaScript </h1>" ;
console.log(headline.innerHTML) ;


// headline.innerHTML += "<button class=\"btn\"> Learn More from JavaScript   </button>"
headline.innerHTML += ` <button class="btn"> Learn More from JavaScript   </button>` ;
console.log(headline.innerHTML) ;

















