
console.log("34JS") ;


//  //  Create Your Own Method  ==>


//  Methods =>  Function inside the object are called method


console.log(this) ; // it print the window object
// console.log(window) ; // it also print same as this the window object
// see in the developer tool or console 
// in terminal it will give error
//
// this === window then it give true

function myFunc()
{
    console.log("Hello World") ;
}
myFunc() ;
// window.myFunc() ; // also print  Hello World   in developer tools



// Example 1. ==>
console.log("Example 1. ") ;

const person = {
    firstName : "Hemant" ,
    age : 22 ,
    about : function(){
 
        // console.log(`Person name is ${firstName} and person age ${age} `)
        // the above line give error we can't write it
        // when we call person.about();  so we use below

        console.log(`Person name is ${this.firstName} and person age ${this.age} `)
        console.log("here this print the object person ",this) ;
        // the above line will print the object person 
        console.log(this.firstName , this.age) ; // print Hemant 22
    }  
}

console.log(person) ;
console.log(person.firstName) ;
console.log(person.age) ;
console.log(person.about) ; // it print the complete function

person.about() ;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// // Example 2. ==>

console.log("Example 2. ==>  ") ;


function personInfo()
{
    console.log(`Person name is ${this.firstName} and person age ${this.age} `)

}

const person1 = {
    firstName : "Pushpendra" ,
    age : 23 ,
    about : personInfo
}

const person2 = {
    firstName : "Ashish" ,
    age : 17 ,
    about : personInfo
}

const person3 = {
    firstName : "Aditya" ,
    age : 18 ,
    about : personInfo
}

personInfo() ; //  Person name is undefined and person age undefined
person1.about() ; // Person name is Pushpendra and person age 23
person2.about() ; // Person name is Ashish and person age 17
person3.about() ; // Person name is Aditya and person age 18


















































