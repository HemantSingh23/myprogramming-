

console.log("40JS") ;  


//  //  getter And setters ==>



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

    set fullName(fullName)
    {
        const [firstName,lastName ] =  fullName.split(" ")
        this.firstName = firstName ;
        this.lastName = lastName ;
    }
}

const person1 = new Person("Hemant", "Singh", 22)
console.log(person1) ;
console.log(person1.firstName) ;  // Hemant
console.log(person1.lastName) ;   // Singh
console.log(person1.age) ;
console.log(person1.fullName) ;  // print Hemant Singh



// person1.setName("Aditya", "Rajawat") ;
// console.log(person1.firstName) ;  // Aditya
// console.log(person1.lastName) ;   // Rajawat


// person1.firstName = "Ashish";
// person1.lastName = "Singh";
// console.log(person1.firstName) ;  // Ashish
// console.log(person1.lastName) ;   // Singh

person1.fullName = "Parul Singh";
console.log(person1) ;













































































