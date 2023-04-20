


console.log('We are in tut7.js and lets discuss about arrays');
let marks = [34, 23, 24, 93 ,73, 25];
const fruits = ['Orange', 'Apple', 'Pineapple'];
const mixed = ['str', 89, [3, 5]];

const arr = new Array(23,123,21, 'Orange');
console.log(marks);
console.log(mixed);
console.log(fruits[1]);

console.log(arr.length);
console.log(Array.isArray(arr));  // true
console.log(Array.isArray('dfdf')); // false 
// above return true if array will be there if not there then false return
// like arr is an array so return true and  'dfdf' is not array so false

arr[0] = 'Hemant';
console.log(arr);


let arrelement = arr[3];
console.log('element :', arrelement);
// above two lines and the below line are same statement
console.log('element :', arr[3]);



let value = marks.indexOf(73);
console.log(value);
// above two lines and the below line are same statement
console.log(marks.indexOf(73))

// Mutating or Modifying arrays
marks.push(3564);
console.log(marks);

marks.unshift(1009);
console.log(marks);

marks.pop()
console.log(marks);

marks.shift()
console.log(marks);

marks.splice(2, 3);
console.log(marks);

marks.reverse()
console.log(marks);

let marks2 = [1 , 2 , 3 , 7]
marks = marks.concat(marks2);
console.log(marks);

let myobj = {
    'first name': 'Hemant', 
    channel: 'Allinone',
    isActive: true,
    marks: [1,5,3,6]
}

console.log(myobj)
console.log(myobj['channel'])
console.log(myobj.channel)
           
