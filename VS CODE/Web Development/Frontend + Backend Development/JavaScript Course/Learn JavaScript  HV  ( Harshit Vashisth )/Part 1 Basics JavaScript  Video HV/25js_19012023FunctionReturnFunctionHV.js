

console.log("25JS") ;



//  // Function Returning Function  ==>



function myFunc()
{
    return "a" ; // return string
}
const ans = myFunc() ;
console.log(ans) ;



function myFunc1()
{
    return {name : "Hemant"} ;   // return object
}
const ans1 = myFunc1() ;
console.log(ans1) ;



// Function Returning Function  ==>


function myFunc2()
{
    function hello()
    {
        console.log("Hello World 2") ;
    }
    return hello;   // return function
}
const ans2 = myFunc2() ; // after returing the function ans2 will beocme fucntion
console.log(ans2) ;
ans2() ;



function myFunc3()
{
    function hello()
    {
        return "Hello World 3"  ;
    }
    return hello;   // return function
}
const ans3 = myFunc3() ; // after returing the function ans2 will beocme fucntion
console.log(ans3) ;
console.log(ans3()) ;







































