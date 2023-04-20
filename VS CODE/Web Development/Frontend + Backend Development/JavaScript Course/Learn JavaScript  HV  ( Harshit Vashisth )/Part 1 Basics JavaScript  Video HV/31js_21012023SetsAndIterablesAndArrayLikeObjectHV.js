

console.log("31JS") ;   



//  // Sets and Iterables and  Array like Object   ==>   ==>







//  // Iterables ==>
//  where we can use for of loop 
// ex. string , array


const firstName = "Hemant" ;  // string
for(let char of firstName)
{
    console.log(char) ;
}


const items = ['item1', 'item2', 'item3'];  // array
for(let item of items)
{
    console.log(item) ;
}




//  // in object we can't use for of loop means
//  // objects are not iterable see example below =>

//  // the below code give error  =>
// const users = {'key1' : 'value1' , 'key2' : 'value2'}
// for(let user of users)
// {
//     console.log(user) ;
// }





//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////







//  // Array like Object   ==>   ==>

// Those which has length property and we can access by index
// ex. string , array


const firstName1 = "Hemant" ;
console.log(firstName1.length) ;
console.log(firstName1[2]) ;




//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





//  //   Sets  ==>   ==>

// Sets are iterable
// store the data and have its own method
// no-index access and order is not guranteed
// store only unique item only


const  numbers = new Set([1,2,3]) ;
console.log(numbers) ; // print  Set(3) { 1, 2, 3 }

const  numbers1 = new Set([1,2,3,3,2]) ;
console.log(numbers1) ; // print  Set(3) { 1, 2, 3 }

//  // numbers and numbers1 print the same set(3) which is 1 2 3  

// console.log(numbers[2]) ;  // print undefined beccause no index access



const  numbers2 = new Set("abc") ;
console.log(numbers2) ; // print  Set(3) { 'a', 'b', 'c' }





const  nums = new Set() ;
nums.add(1);
nums.add(1);
nums.add(2);
nums.add(3);
nums.add(3);
nums.add(4);
nums.add(5);
nums.add(6);
nums.add(7);
console.log(nums) ; // print  Set(3) { 1, 2, 3 }


const items1 = ['item1', 'item2', 'item3'] ;
nums.add(items1);
// nums.add(items1);
// // // here only one time item1 array will be store
console.log(nums) ; 



// nums.add(['elem1', 'elem2']);
// nums.add(['elem1', 'elem2']);
// but here both will be store because in memory both are different
// array and have different address
// console.log(nums) ; 



//  // check an element in the set is present or not  ==>

// we check using has() function which return true or false

if(numbers.has(1)) console.log("1 is present") ;
else console.log("1 is not present") ;




console.log("Iterate in set using for of loop ") ;

for(let num of nums)
{
    console.log(num) ;
}





//  // if want unique element from any array ==>


const myArray = [1,2,2,3,3,2,4,4,5,7,5,6,4,7,8,6,8];
const uniqueElement = new Set(myArray);
console.log(uniqueElement) ; // print unique elements of array


// console.log(uniqueElement.length) ; // print undefined
// // we can't use length property



//  // task is to find the length of the sets

let len = 0;
for(let elem of uniqueElement)
{
    len++;
}
console.log(len) ;






