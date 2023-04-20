

console.log("28JS") ;  



//  //  Reduce Method ==>




const numbers = [1,2,3,4,5] ;  
//  // To understand the reduce method we do sum of all number


const sum = numbers.reduce( (accumulater, currentValue)=>{
    return accumulater + currentValue ;
}) ;
console.log(sum) ; // print 15

//  // in above the sum is calculated like below ==>

//  accumulator    currentValue    return
//       1              2            3
//       3              3            6
//       6              4            10
//       10             5            15



//  // if initial value is given ==>

const sum1 = numbers.reduce( (accumulater, currentValue)=>{
    return accumulater + currentValue ;
}, 100) ;
console.log(sum1) ; // print 115 because initail value is 100






//  //  //   in the below example we want the sum of price 

const userCart = [
    {productId : 1 , productName : "mobile", price : 12000},
    {productId : 2 , productName : "laptop", price : 52000},
    {productId : 3 , productName : "TV", price : 36000}
]


const totalAmount = userCart.reduce( (totalPrice, currenttProduct) => {
    return totalPrice + currenttProduct.price ;
}, 0)
console.log(totalAmount) ;


//  // in above the totalAmount is calculated like below ==>

//  totalPrice    currenttProduct    return
//       0              12000         12000
//       12000          52000         64000
//       64000          36000         100000































