
console.log("19JS") ;  



//  //  Functions ==>


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 

//  //  Function Declaration ==>

// function singHappyBirthday()
// {
//     console.log("Happy Birthday to you .....") ;
// }
// singHappyBirthday();


//  //  Function Expression ==>

const singHappyBirthday = function ()
{
    console.log("Happy Birthday to you .....") ;
}
singHappyBirthday();



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//  //  Function Declaration ==>

// function sum(num1 , num2)
// {
//     console.log(num1+num2);
// }
// sum(2,8);
// sum(undefined,undefined); // print NaN (Not A Number)
// sum(4,undefined); // print NaN (Not A Number)


//  //  Function Expression ==>

const sum = function (num1 , num2)
{
    console.log(num1+num2);
}
sum(2,8);
sum(undefined,undefined); // print NaN (Not A Number)
sum(4,undefined); // print NaN (Not A Number)



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//  //  Function Declaration ==>

// function isEven(num)
// {
//     // if(num%2 ===0) return true;
//     // else return false;

//     return num%2 ===0; 
// }
// console.log(isEven(5)) ;


//  //  Function Expression ==>

const isEven = function (num)
{
    // if(num%2 ===0) return true;
    // else return false;

    return num%2 ===0; 
}
console.log(isEven(5)) ;



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//  //  Function Declaration ==>

// function firstChar(anystring)
// {
//     return  anystring[0] ;
// }
// console.log(firstChar("djhbjs")) ;


//  //  Function Expression ==>

const firstChar = function (anystring)
{
    return  anystring[0] ;
}
console.log(firstChar("djhbjs")) ;



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//  //  Function Declaration ==>

// function findTarget(array  , Target )
// {
//     for(let i=0; i<array.length; i++)
//     {
//         if(array[i] === Target) return i ;
//     }
//     return -1 ;
// }
// const myArray = [1,3,8,90,78,65];
// console.log(findTarget(myArray, 90)) ;

// console.log(findTarget([2,5,8,9,1,12,23,45,65,67,4], 1)) ;


//  //  Function Expression ==>

const findTarget = function (array  , Target )
{
    for(let i=0; i<array.length; i++)
    {
        if(array[i] === Target) return i ;
    }
    return -1 ;
}
const myArray = [1,3,8,90,78,65];
console.log(findTarget(myArray, 90)) ;

console.log(findTarget([2,5,8,9,1,12,23,45,65,67,4], 1)) ;



























