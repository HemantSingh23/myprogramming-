

console.log("22JS") ;




//  // Function Inside Function  ==>



const app = () => {

    const myFunc = () => {
        console.log("Hello form myFunc") ;
    }
    
    const addTwo = (num1, num2) => {
       return num1 + num2 ;
    }

    const mulTwo = (num1, num2) =>  num1 * num2 ;


    myFunc();
    console.log (addTwo(3,5));
    console.log (mulTwo(2,8));

    console.log("inside app") ;
}

app() ;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//  // Lexical Scope ==>

console.log("Lexical Scope") ;

function myApp()
{
    const myVar = "value1" ;

    function myFunc1()
    {
        // const myVar = "value59" ;
        const myFunc2 = () => 
        {
            console.log("Inside myFunc1", myVar ) ;// 
        }
        myFunc2() ;
    } 
 
    console.log("value of myvar : ",myVar) ;
    myFunc1();

}
myApp() ;

// if in myFunc1 , myVar is not comments then in the 
// myFunc2 myVar will be value59 because in myFunc2 , myVar
// is not ddfined so it will be check in the lexical environment
// of myFunc2 which is myFunc1 so here myVar is value59
// then in myFunc2, myVar value will be value59 if in myFunc1
// myVar is not comment out
//
// if if in myFunc1, myVar is comment out then it check on the 
// lexical environmnet of myFunc1 which is myApp and if here
// myVar is defined which is value1 then it print value1 in 
// muFunc2  otherwise it check on the lexical environment of 
// the myApp then it print 



































