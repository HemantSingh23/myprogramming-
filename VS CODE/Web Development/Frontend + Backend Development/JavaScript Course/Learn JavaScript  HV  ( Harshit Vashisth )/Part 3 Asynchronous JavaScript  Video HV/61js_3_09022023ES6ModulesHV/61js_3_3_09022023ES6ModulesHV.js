


// //  if we do export default the we don't need to use curly braces
// // and in one file we can do export default only  1 time



export class Person

// // // the below type export are called dafault export
// export default class Person

{
    constructor (firstName , lastName , age)
    {
        this.firstName = firstName ;
        this.lastName = lastName ;
        this.age = age ;
    }

    info()
    {
        console.log(this.firstName, this.lastName, this.age) ;
    }




}



// // // the below type export are called name export

export class Person1
{
    constructor (firstName , lastName , age)
    {
        this.firstName = firstName ;
        this.lastName = lastName ;
        this.age = age ;
    }

    info()
    {
        console.log(this.firstName, this.lastName, this.age) ;
    }




}





































