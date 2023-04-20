

console.log("38JS") ;



//  //  NewKeyword ==>
// it creates a empty object and value of empty object is this means
// this = {}

// return this


function creatUser(firstName, age)
{
    this.firstName = firstName ;
    this.age = age ;
}

creatUser.prototype.about = function()
{
    console.log(this.firstName, this.age) ;
}

const user = new creatUser("Hemant",22) ;

console.log(user) ;
user.about() ;






///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////






function  CreatUser1(firstName,lastName,email,age,address)
{
    this.firstName = firstName;
    this.lastName = lastName;
    this.email = email;
    this.age = age;
    this.address = address;

    // return this ;  // we can either retunr ot not
}

CreatUser1.prototype.about =  function()
{
    return ` ${this.firstName} is ${this.age} years ` ;
} ;

CreatUser1.prototype.is18 =  function()
{
    return this.age >= 18 ;
} ;

CreatUser1.prototype.sing = function()
{
    return 'toon na na na la la' ;
}

const user1 = new CreatUser1('Hemant', 'Singh', 'HemantsinghRajawat@gmail.com', 22, 'my address' )
const user2 = new CreatUser1('pushpendra', 'Singh', 'pushpendrasinghRajawat@gmail.com', 23, 'my address' )
const user3 = new CreatUser1('Ashish', 'Singh', 'AshishsinghRajawat@gmail.com', 17, 'my address' )


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



for(let key in user1)
{
    // console.log(key) ; // print all including about , is18 and sing


    // if we want print all key except about , is18 and sing then 
    if(user1.hasOwnProperty(key)) console.log(key) ;
}



















































