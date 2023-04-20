

console.log('We are at tut 6');


const name = 'Hemant';
const greeting = 'Good Morning';
console.log(greeting + ' ' + name);



let html;
html  = "<h1> this is heading</h1>"+
        "<p> this is My para</p>";
html = html.concat('this', ' str2');
console.log(html);
console.log(html.length);
console.log(html.toLowerCase());
console.log(html.toUpperCase()); 
console.log(html); // string will not change parmanentaly
console.log(html[1]);
console.log(html.indexOf('<'));
console.log(html.indexOf('This'));
console.log(html.indexOf('this'));
console.log(html.lastIndexOf('<'));
console.log(html.charAt(5));
console.log(html.endsWith('dsfsdfd')); // return false
console.log(html.endsWith('str2'));  // return true
console.log(html.endsWith('this'));  // return false
console.log(html.includes(' fg'));  // return false
console.log(html.includes('is'));  // return true
console.log(html.substring(1,8));  // return characters from index 1 to 7
console.log(html.substring(2,7));  // return characters from index 2 to 6
// substring(a,b) then return characters from index a to (b-1)

console.log(html.slice(0, 4))   // return characters from index 0 to 3
console.log(html.split('>'));
console.log(html.replace('this', 'it')); // replace only the first occurrence


 

let fruit1 = 'Orange\'';
let fruit2 = 'Apple';
let myHtml = `Hello ${name}
            <h1> This is "my" heading </h1>
            <p> You like ${fruit1} and ${fruit2}`;

document.body.innerHTML = myHtml; 





// Quick Quiz

// let car1 = `B`;
// let car2 = `R`;

// let owner = ` Hello <h2>Hemant</h2>
//             Your cars name is  ${car1} ${car2}` ;

// document.body.innerHTML = owner;