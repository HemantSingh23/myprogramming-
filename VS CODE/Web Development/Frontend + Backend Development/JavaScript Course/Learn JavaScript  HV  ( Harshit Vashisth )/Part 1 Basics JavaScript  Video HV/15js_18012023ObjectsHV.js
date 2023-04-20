
console.log("15JS") ; 



//  //  //  //   Objects    ==>
//
// objects are reference type
// Arrays are good but not sufficient
// for real world data
// objects store key value pairs
// objects don't have index

//  // in objects key is in string means
// key written in double quotes by default 
// so if key is a singlr name like name , age etc
// then we can write key with or without  double quotes 
// and if key is not a single name like First Name , 
// Last Name etc then key will be write with single quotes
//

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const person = { name:"Hemant" , age:22 };
// console.log(typeof person) ; // print object
console.log(person) ; 
console.log(person.name);
console.log(person.age);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


const person1 = {
    name: "Hemant" ,
    age: 22 ,
    hobbies:["cricket","chess","playing"] 
}


console.log(person1) ; 
console.log(person1.name);
console.log(person1.age);
console.log(person1.hobbies);

//  // add key value pair in object person1
person1.gender = "male" ;
console.log(person1);
console.log(person1.gender);



// // difference between dot and brackets notation ==>

console.log(person1.name);
console.log(person1["name"]); // because key is in string

// person1.class = "CSE" ;
person1["class"] = "CSE" ;
console.log(person1);


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


const person2 ={
    "First Name" : "Hemant" ,
    "Last Name" : "Singh" ,
    "Age" : 22 ,
    "Person Hobbies" : ["cricket", "chess", "music"]
}
console.log(person2);

// console.log(person2.Person Hobbies);// can't do this error
console.log(person2["Person Hobbies"]);




const var1 = "email" ; 

// here we want to add a key in object same the value of var1
// like here var1 is email so we want to add email as key
// then for this we use the following method

// person2.var1 = "hemantsingh@gmail.com" ; 
// person2["var1"] =  "hemantsingh@gmail.com" ; 
// // the above will add var1 as a key not email

person2[var1] =  "hemantsingh@gmail.com" ; // it add email as key
console.log(person2);




//  //  //   Iteraration on the objects   ==>

// we use two methods 
// 1. for in loop
// 2. object keys

console.log("Iteraration on the objects ")

//  // 1. for in loop =>

console.log("Iteraration Using For In loop ")

// for(let key in person2)
// {
//     console.log(key); // print only all keys in object
// }


//  //  to access the key value pair  => 

// for(let key in person2)
// {
//     // console.log(person2.key); // print undefined
//     // because there is not any key in the object has name key

//     // console.log(person2[key]); // print nly value of keys
//     // console.log(key ,":", person2[key]); // print key value pair
//     console.log( ` ${key} : ${person2[key]} ` ); // print key value pair
// }




//  //  2. object keys=>

console.log("Iteraration Using Object Keys ")

console.log(Object.keys(person2)) ; // print all key of object
console.log(typeof(Object.keys(person2)) ); // print object

const val = Array.isArray(Object.keys(person2))
console.log(val) ;  // print true





//  //  for of loop ==>

for(let key of Object.keys(person))
{
    console.log(key);
}





//  //  our taks is to make a object  ==>


//  //  // Computed Properties ==>

const key1 = "object1" ;
const key2 = "object2" ;
const value1 = "myvalue1" ;
const value2 = "myvalue2" ;

//  //  our taks is to make a object given below =>
// const obj = {
//     object1 : "myvalue1"  ,
//     object2 : "myvalue2"  
// } ;


// //  // 1st way =>

// const obj = {}
// console.log(obj);

// obj[key1] = value1;
// obj[key2] = value2;

// console.log(obj);


//  // 2nd way =>

const obj = {
    [key1] : value1,
    [key2] : value2
};
console.log(obj);





































