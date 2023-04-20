

console.log("8JS");


//  // Switch Statement ==>



// // lets print all days using if else ==>

let day = 1;

if(day == 0) console.log("Sunday");
else if(day == 1) console.log("Monday");
else if(day == 2) console.log("Tuesday");
else if(day == 3) console.log("Wednesday");
else if(day == 4) console.log("Thursday");
else if(day == 5) console.log("friday");
else if(day == 6) console.log("Saterday");
else  console.log("Invalid Day");


// Now using Switch Statement ==>

// switch(day)
// {
//     case 0 :
//         console.log("Sunday");
//     case 1 :
//         console.log("Monday");
//     case 2 :
//         console.log("Tuesday");
//     case 3 :
//         console.log("Wednesday");
//     case 4 :
//         console.log("Thursday");
//     case 5 :
//         console.log("friday");
//     case 6 :
//         console.log("Saterday");
//     default  :
//         console.log("Invalid Day");
// }

// in the above switch statement if day = 1 then
// case 1 and after case 1 all cases will be print
// because when one case is true then after that case
// all value case will be print
// 
// so stop this we use break statement after every case


switch(day)
{
    case 0 :
        console.log("Sunday");
        break;
    case 1 :
        console.log("Monday");
        break;
    case 2 :
        console.log("Tuesday");
        break;
    case 3 :
        console.log("Wednesday");
        break;
    case 4 :
        console.log("Thursday");
        break;
    case 5 :
        console.log("friday");
        break;
    case 6 :
        console.log("Saterday");
        break;
    default  :
        console.log("Invalid Day");
}






























