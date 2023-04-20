

console.log("48js_2") ;






const rootNode = document.getRootNode();
console.log(rootNode) ;


const htmlElementNode = rootNode.childNodes[0];
console.log(htmlElementNode) ; // print child of document rootnode



console.log("Print all childs of html node ==>") ; // print all childs => script head text body

const htmlChilds = htmlElementNode.childNodes ;
console.log(htmlChilds) ; 
// print all childs => script head text body ===== 0 1 2 3


// const scriptElementNode = htmlElementNode.childNodes[0];
// console.log(scriptElementNode) ; // script 

const headElementNode = htmlElementNode.childNodes[1];
console.log(headElementNode) ; // head 

const textNode = htmlElementNode.childNodes[2];
console.log(textNode) ; // print text 

const bodyElementNode = htmlElementNode.childNodes[3];
console.log(bodyElementNode) ; // print body




console.log("Print Parents ==>") ; // print all childs => script head text body

const headParentNode = headElementNode.parentNode;
console.log(headParentNode); // print html




console.log("Print next node siblings ==>") ; 


// // // the below will give error 
// const scriptsiblingNode = scriptElementNode.nextSibling;
// console.log(scriptsiblingNode); // give error

const headsiblingNode = headElementNode.nextSibling;
console.log(headsiblingNode); // print text

const tetxsiblingNode = textNode.nextSibling;
console.log(tetxsiblingNode); // print body

const bodysiblingNode = bodyElementNode.nextSibling;
console.log(bodysiblingNode); // print null




// // // // nextElementSibling ==>
//
// it give next element sibing like for  head it is body
// means it will not give next element sibing as text
// but it give next element sibing body
//
// while in the above nextSibling method give text not body
//
console.log("Print next Element siblings ==>") ; 


const headElementsiblingNode = headElementNode.nextElementSibling;
console.log(headElementsiblingNode); // print text
 
 
 
  
 
 
console.log("Task  =====> ") ; 
 
 
const h1 = document.querySelector("h1") ; 
const div = h1.parentNode ; 
div.style.color = "#efefef" ; 
div.style.backgroundColor = "#333" ; 
 
// const body = div.parentNode ; 
// body.style.backgroundColor = "#333" ;   // change the color of body
 
const body1 = document.body ;
console.log(body1) ; // print the body
 
const head = document.querySelector("head") ;
console.log(head) ; // 
 
 
////////////////////////////////////////////
const title = document.querySelector("title") ;
console.log(title) ; // 


// // if we want all child except new line and space (text node)
const container = document.querySelector(".container") ;
console.log(container.childNodes) ; //  give all childs
console.log(container.children) ; //  only h1 and p tag

 
 
 

































