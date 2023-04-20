
console.log("7JS");



// if else condition ==>


let age = 18 ;

if(age>=18)
{
    console.log("User can play Game");
}
else
{
    console.log("User can't play Game");
}


console.log(8%3);  // print 2 which is remainder

let num = 14;
if(num%2 ==0) console.log("even");
else console.log("odd");




//  //  truthy and falsy values ==>

// falsy values =>

// false
// ""
// null
// undefined
// 0

// truthy values => except falsy values  all other
// values are truthy value

let firstName = ""; // it will false
if(firstName) console.log(firstName);
else console.log("firstName is kinda empty");








//  // ternary operator ==>


// Without ternary operator =>
let age1 = 15;
let drink1;

if(age1>=5) drink1 = "conffee";
else drink1 = "milk" ;

console.log(drink1);


// With ternary operator =>


let age2 = 3;

let drink2 = age2>=5 ? "coffee" : "milk" ;
console.log(drink2);




//  // and or operator ==>


let name1 = "Hemant";
let myAge = 22 ;


// if(name1[0] === "H") 
// {
//     console.log("Your name start with H ");
// }
// if(myAge>18) console.log("you are above 18 ") ;

if(name1[0] === "H"  &&  myAge > 18)
{
    console.log("Your name start with H and you are above 18 ") ;
}
else
{
    console.log("Wrong") ;
}

myAge = 16;

if(name1[0] === "H"  ||  myAge > 18)
{
    console.log("Your name start with H and you are above 18 ") ;
}
else
{
    console.log("Wrong") ;
}





//  //  // Nested if else   ==>


// winning number is 19 and guess number
// if guess number is 19 then Your guess number is right
// if guess number > 19 then Your guess number is high
// if guess number < 19 then Your guess number is less
//
// 

let winningNumber = 19;
let userGuess = +prompt("Guess a number") ;
console.log(typeof userGuess); // print string
// prompt("Guess a number")  will be a stirng 
// that's why we use + to make it number datatype

if(userGuess === winningNumber)
{
    console.log("Your Guess is right"); 
}
else
{
    if(userGuess > winningNumber)
    {
        console.log("Your Guess is high"); 
    }
    else
    {
        console.log("Your Guess is low"); 
    }
} 




let tempInDegree = 50;

if(tempInDegree<0) console.log("Extreme Cold");
else if(tempInDegree<16) console.log("Cold");
else if(tempInDegree<25) console.log("Normal");
else if(tempInDegree<35) console.log("Hot");
else if(tempInDegree<45) console.log("Very Hot");
else  console.log("Too Hot");















