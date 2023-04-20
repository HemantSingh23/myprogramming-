
console.log("36JS") ;



//  //  Create Function to Create Multiple Object ==>



const user = {
    firstName : "Hemant",
    lastName : "Singh" ,
    email : "HemantsinghRajawat@gmail.com",
    age : 22,
    address : "House Number, Colony, pincode, state",
    about : function(){
        return ` ${this.firstName} is ${this.age} years ` ;
    } ,
    is18 : function(){
        return this.age >= 18 ;
    }
}
console.log(user) ;

const aboutUser =  user.about() ;
console.log(aboutUser) ;





//  //   here we function which create object and return object


console.log("make function which create object and return object   ")

function  creatUser(firstName,lastName,email,age,address)
{
    const user1 = {} ;
    user1.firstName = firstName;
    user1.lastName = lastName;
    user1.email = email;
    user1.age = age;
    user1.address = address;
    user1.about = function(){
        return ` ${this.firstName} is ${this.age} years ` ;
    } ,
    user1.is18 =  function(){
        return this.age >= 18 ;
    }

    return user1 ;
}

const user1 = creatUser('Hemant', 'Singh', 'HemantsinghRajawat@gmail.com', 22, 'my address' )

console.log(user1) ;


const is18 = user1.is18();
console.log(is18) ; // true


const about = user1.about();
console.log(about) ; // true



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  // in the above code there are lots of drawbacks



// in the above code if we make many users like user1 then eveytime
// when we make any user then two methos about and is18 are created 
// for every user which takes a lot of memory so we make another
// 

console.log("Fixed some Drabacks ==> ")

const userMethods = {
    about : function(){
        return ` ${this.firstName} is ${this.age} years ` ;
    } ,
    is18 :  function(){
        return this.age >= 18 ;
    }
}

function  creatUser1(firstName,lastName,email,age,address)
{
    const user = {} ;
    user.firstName = firstName;
    user.lastName = lastName;
    user.email = email;
    user.age = age;
    user.address = address;
    user.about = userMethods.about;
    user.is18 = userMethods.is18;
    

    return user ;
}

const user2 = creatUser1('Hemant', 'Singh', 'HemantsinghRajawat@gmail.com', 22, 'my address' )
const user3 = creatUser1('pushpendra', 'Singh', 'pushpendrasinghRajawat@gmail.com', 23, 'my address' )
const user4 = creatUser1('Ashish', 'Singh', 'AshishsinghRajawat@gmail.com', 17, 'my address' )


console.log("Now user2  ") ;
console.log(user2) ;
console.log(user2.about()) ;

console.log("Now user3  ") ;
console.log(user3) ;
console.log(user3.about()) ;

console.log("Now user4  ") ;
console.log(user4) ;
console.log(user4.about()) ;





//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  // in the above code there are some  drawbacks

// if in the above code we need to add some more methods in the
// userMethods2  then we also need to add in the creatUser2 
// so if we forget to add in the creatUser2 then it will give
// undefined so we not need to write in creatUser2. for this we use
//  Object.create() to escape from undefined


console.log("Fixed some more Drabacks ==> ")

const userMethods2 = {
    about : function(){
        return ` ${this.firstName} is ${this.age} years ` ;
    } ,
    is18 :  function(){
        return this.age >= 18 ;
    } ,
    sing : function(){
        return 'toon na na na la la' ;
    }
}

function  creatUser2(firstName,lastName,email,age,address)
{
    const user = Object.create(userMethods2) ;
    user.firstName = firstName;
    user.lastName = lastName;
    user.email = email;
    user.age = age;
    user.address = address;
    
    return user ;
}

const user5 = creatUser1('User5', '5', 'HemantsinghRajawat@gmail.com', 5, 'my address' )

console.log("Now user5  ") ;
console.log(user5) ;
console.log(user5.about()) ;








