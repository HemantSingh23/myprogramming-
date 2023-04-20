

console.log("42JS") ;  




//  //  Static Methods and Properties  ==>














class Person 
{
    constructor(firstName, lastName , age)
    {
        this.firstName = firstName;
        this.lastName = lastName;
        this.age = age;
    }

    get fullName() { return  ` ${this.firstName} ${this.lastName}  ` ; }

    setName(firstName, lastName)
    {
        this.firstName = firstName ;
        this.lastName = lastName ;
    }

    static classInfo()
    {
        return 'this is person class' ;
    }

    static desc = "static property" ;

    set fullName(fullName)
    {
        const [firstName,lastName ] =  fullName.split(" ") ; 
        this.firstName = firstName ; 
        this.lastName = lastName ; 
    } 
}      

const person1 = new Person("Hemant", "Singh", 22)
console.log(person1) ;

const info = Person.classInfo() ;
console.log(info) ;


console.log(Person.desc) ;






// // JavaScript Part 1 video Completed 
// // JavaScript Part 1 video Completed 
// // JavaScript Part 1 video Completed 
// // JavaScript Part 1 video Completed 
// // JavaScript Part 1 video Completed 
// // JavaScript Part 1 video Completed 
// // JavaScript Part 1 video Completed 
// // JavaScript Part 1 video Completed 
// // JavaScript Part 1 video Completed 
// // JavaScript Part 1 video Completed 
// // JavaScript Part 1 video Completed 
// // JavaScript Part 1 video Completed 
// // JavaScript Part 1 video Completed 
// // JavaScript Part 1 video Completed 
// // JavaScript Part 1 video Completed 
// // JavaScript Part 1 video Completed 
// // JavaScript Part 1 video Completed 
// // JavaScript Part 1 video Completed 
// // JavaScript Part 1 video Completed 
// // JavaScript Part 1 video Completed 

























