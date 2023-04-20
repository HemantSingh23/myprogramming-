

console.log("33JS") ;


//  //  Clone Using Objects  ==>


const obj1 = {
    key1 :"value1",
    key2 :"value2"
}

const obj2 = obj1 ;

obj1.key3  = "value" ;
//  // here key3 also add in the obj2
console.log(obj1);
console.log(obj2);




const obj4 = {
    key1 :"value1",
    key2 :"value2"
}

// const obj5 = {...obj4} ;  // new spread operator 
const obj5 = Object.assign({}, obj4) ;  // old spread operator 

obj4.key3  = "value" ;
//  // here key3 is not add in the obj5
console.log(obj4);
console.log(obj5);
 








//  //  Optional Chaining ==>

console.log("Optional Chaining ") ;



console.log("User object ") ;

const user = {
    firstName : "Hemant",
    address : {houseNumber : '1234'} // here address also a object
}

console.log(user.firstName) ;
console.log(user.address) ;
console.log(user.address.houseNumber) ;



console.log("User1 object ") ;

const user1 = {
    firstName : "Hemant",
}

console.log(user1.firstName) ;
console.log(user1.address) ; // print undefined
// console.log(user1.address.houseNumber) ; // give error
//  //  user1.address it give undefined because it is not
//  // available in the object user1 so it print undefined
//  //  but here user1.address.houseNumber  we access
//  // houseNumber in address while address already undefined
//  // that't why it give error


//  //   so if we want that it is not give the error because
//  // it can happen that after sometime address will be 
//  // present in the object so place ? question mark
//  // see below
//  //


console.log("User2 object ") ;

const user2 = {
    firstName : "Hemant",
}

console.log(user2?.firstName) ; // print Hemant
// it means whether firstName is present in the user1 object
// or not. If present then print otherwise if it is undefined 
// or null then print undefined

console.log(user2?.address) ; // print undefined
console.log(user1?.address?.houseNumber) ;  // print undefined









































