

console.log("39JS") ;



//  //  //      Class Keyword  ==>  Also see extend class below

// without new keyword we can't call class constructor



class CreatUser1
{
    constructor(firstName,lastName,email,age,address)
    {
        console.log(" Constructor called ") ;
        this.firstName = firstName;
        this.lastName = lastName;
        this.email = email;
        this.age = age;
        this.address = address;
    }

    about() {  return ` ${this.firstName} is ${this.age} years ` ; }
    is18()  {  return this.age >= 18 ; }
    sing()  {  return 'toon na na na la la' ; }
    func(a) { console.log(a) ; } 
}



const user1 = new CreatUser1('Hemant', 'Singh', 'HemantsinghRajawat@gmail.com', 22, 'my address' )
const user2 = new CreatUser1('pushpendra', 'Singh', 'pushpendrasinghRajawat@gmail.com', 23, 'my address' )
const user3 = new CreatUser1('Ashish', 'Singh', 'AshishsinghRajawat@gmail.com', 17, 'my address' )


console.log("Now user1  ") ;
console.log(user1) ;
console.log(user1.about()) ;
console.log(user1.is18()) ;
console.log(user1.sing()) ;
user1.func("HE") ;
console.log(Object.getPrototypeOf(user1) );

console.log("Now user2  ") ;
console.log(user2) ;
console.log(user2.about()) ;
console.log(user2.is18()) ;
console.log(user2.sing()) ;
user2.func("HA") ;
console.log(Object.getPrototypeOf(user2) );


console.log("Now user3  ") ;
console.log(user3) ;
console.log(user3.about()) ;
console.log(user3.is18()) ;
console.log(user3.sing()) ;
user3.func("PU") ;
console.log(Object.getPrototypeOf(user3) );






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////






//  //  Extent Class ==>

console.log(" Extent Class ==> ") ;



class Animal {
    constructor(name , age)
    {
        this.name = name;
        this.age = age;
    }

    eat() { return  ` ${this.name} is eating `  ; }
    isSuperCute() { return  this.age ; }
    isCute() { return  true ; }
}


class Dog extends Animal 
{
    // in javascript Dog is called sub class
    constructor(name ,age, speed)
    {
        super(name ,age);
        this.speed = speed;
    }

    eat() { return `modified eat : ${this.name} is eating ` ; }

    run() { return ` ${this.name} is running at ${this.speed} ` ; }
}

const tommy = new Dog("tommy", 3,45);
console.log(tommy) ;
console.log(tommy.isCute()) ;
console.log(tommy.eat()) ;
console.log(tommy.run()) ;









































