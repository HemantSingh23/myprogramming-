
console.log("29JS") ; 


//  //  Sort Method ==>

// it change the original array 
// it sort in the form of string  

//  // Also see finf method below 


const userNames = ["Hemant", "Pushpendra", "Ashish", "Aditya", "Parul", "Deepa" ] ;  
userNames.sort() ;
console.log(userNames) ;  // it print correct because
//  // by default sort function  sort in string method





const numbers = [5,9,1200,400,3000] ;  



numbers.sort() ;
console.log(numbers) ; // it print  [1200, 3000, 400, 5, 9]

// here in JavaScript , sort it as a string means 
// here first all numbers of array written like string
// "5", "9", "1200", "400", "3000"  and then sort it according
// to string using ASCII code

// here "5" has ASCII code is 53 then "9" has 57 then in "1200"
// 1 has 49 then "400" , 4 has 52 then in "3000" , 3 has 51
// so sorted ASCII code is   49     51     52     53   57
// so sorted array is       1200   3000    400    5    9




//  // sort in the form of number  ==>

numbers.sort((a,b) =>{
    return a-b ;
}) ;
console.log(numbers) ; // print [ 5, 9, 400, 1200, 3000 ]

//  above and below code are same 

numbers.sort( (a,b)  =>  a-b ) ;
console.log(numbers) ; // print [ 5, 9, 400, 1200, 3000 ]





//  // sort the below in the low to high price ==>

const products = [
    {productId : 1 , productName : "p1", price : 300},
    {productId : 2 , productName : "p2", price : 3000},
    {productId : 3 , productName : "p3", price : 200},
    {productId : 4 , productName : "p4", price : 8000},
    {productId : 5 , productName : "p5", price : 500}
]

// products.sort((a,b) => a.price - b.price )  ;
// console.log(products) ;
//  // the above code will change the original 



//  // if we want to not change the original then we clone  it
const lowToHigh = products.slice(0).sort((a,b) => a.price - b.price )  ;
console.log(lowToHigh) ;


const HighToLow = products.slice(0).sort((a,b) => b.price - a.price )  ;
console.log(HighToLow) ;




//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




//  // Find Method ==>




function isLengthof3(string)
{
    return string.length ===3 ;
}


const ans = isLengthof3("doggy"); // false
// const ans = isLengthof3("dog"); // true
console.log(ans) ;




const myArray = ["hello", "cat", "dog", "lion"] ;

const ans1 = myArray.find(isLengthof3);
console.log(ans1) ; // print cat
//  // when find function find any string of length 3 then 
// it return that string



const ans2 = myArray.find((string) => string.length ===4 );
console.log(ans2) ; // print lion







// // 

const users = [
    {userId : 1 , userName : "Hemant" },
    {userId : 2 , userName : "Ashish" },
    {userId : 3 , userName : "Aditya" },
    {userId : 4 , userName : "Pushpendra" },
    {userId : 5 , userName : "Piyush" }
] ;


const myUser = users.find((user) => user.userId ===3 )
console.log(myUser) ;




// EverySomeFillSplice
















