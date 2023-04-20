

console.log("32JS") ;



//  //   Maps Object ==>

// map is an iterable and store data in ordered fashion
// store in key value pair(like objet)
// store unique keys like object


// // Difference between maps and objects ===>
//
// object can only have string or symbol as key
// in map we can use anything as key like array, string, number





//  //  object literals =>
// keys are string or symbol
const person = 
{
    firstName : "Hemant",
    age : 22 ,
    1 : "okay"  // here 1 is  string not number
}
console.log(person) ;
console.log(person[1]) ;
console.log(typeof person[1]) ; // here 1 is string not number









//  //    Maps   ===>

const person1 = new Map() ;  // empty map

person1.set('firstName', 'Hemant') ;
person1.set('age', 7) ;
person1.set(1, 'ok') ;  // here 1 is a number not string
person1.set([1,2,3,4], 'OneTwoThreeFour') ;  
person1.set({1 : 'hi'}, 'hiOkay') ;  

console.log(person1) ;
console.log(person1.get('firstName')) ; // print Hemant
console.log(person1.get('age')) ;  // print 7
console.log(person1.get(1)) ;   // print ok


console.log(person1.keys()) ;   // print all keys of Map

// print all keys of Map and type of key
for(let key of person1.keys())
{
    console.log(key , typeof key) ;
} 




for(let key of person1)
{
    console.log(Array.isArray(key) );
}




for(let [key, value] of person1)
{
    console.log(key , value );
}






const person2 = new Map([['fName','Hemant'],['lName','Singh']]) ;  // empty map
console.log(person2) ;





//  // if we want to store more information of person3 
//  // but not in the person3 object but anywhere else then

//  // persons3 object 
const person3 = 
{
    id : 1,
    firstName : "hemant"
}
const person4 = 
{
    id : 2,
    firstName : "Parul"
}

const extraInfo = new Map() ;
 
extraInfo.set(person3 , {age : 22,  gender : "male"})
extraInfo.set(person4 , {age : 24,  gender : "female"})
console.log(extraInfo) ;


console.log(person3.id) // print 1
console.log(extraInfo.get(person3).age) // print 22
console.log(extraInfo.get(person3).gender) // print male



console.log(person4.id) // print 1
console.log(extraInfo.get(person4).age) // print 22
console.log(extraInfo.get(person4).gender) // print male

































