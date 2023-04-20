

console.log("37JS") ;



//  //   Prototype  ==>

//  in javascript, function is function but it is also a object

// function gives us the free space  when we make any function
// that free space is object which is called Prototype
// only functions provide the prototype property

function hello()
{
    console.log("Hello Wolrd" ) ;
}
console.log(hello.prototype) ; // print {}  // which is a object

if(hello.prototype) console.log("Prototype is present" ) ; // this will run
else console.log("Prototype is not present" ) ; // not rum




console.log("Find Prototype in object ==> " ) ; // this will run

const hello1 = ["value1"] ;

if(hello1.prototype) console.log("Prototype is present" ) ; // not run
else  console.log("Prototype is not present" ) ; // this will rum






hello.prototype.abc = "hi_abc" ;
console.log(hello.prototype.abc) ;

hello.prototype.xyz = "hi_xyz" ;
console.log(hello.prototype.xyz) ;

hello.prototype.sing = function(){
    return "lalala" ;
} ;
console.log(hello.prototype.sing()) ;






///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//  /// //  ///   Use of Prototype ==>



function  creatUser1(firstName,lastName,email,age,address)
{
    const user = Object.create(creatUser1.prototype) ;
    user.firstName = firstName;
    user.lastName = lastName;
    user.email = email;
    user.age = age;
    user.address = address;

    return user ;
}

creatUser1.prototype.about =  function()
{
    return ` ${this.firstName} is ${this.age} years ` ;
} ;

creatUser1.prototype.is18 =  function()
{
    return this.age >= 18 ;
} ;

creatUser1.prototype.sing = function()
{
    return 'toon na na na la la' ;
}

const user1 = creatUser1('Hemant', 'Singh', 'HemantsinghRajawat@gmail.com', 22, 'my address' )
const user2 = creatUser1('pushpendra', 'Singh', 'pushpendrasinghRajawat@gmail.com', 23, 'my address' )
const user3 = creatUser1('Ashish', 'Singh', 'AshishsinghRajawat@gmail.com', 17, 'my address' )


console.log("Now user1  ") ;
console.log(user1) ;
console.log(user1.about()) ;
console.log(user1.is18()) ;

console.log("Now user2  ") ;
console.log(user2) ;
console.log(user2.about()) ;
console.log(user2.is18()) ;

console.log("Now user3  ") ;
console.log(user3) ;
console.log(user3.about()) ;
console.log(user3.is18()) ;





















