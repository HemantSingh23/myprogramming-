


// Exercise 1
// You have to create a variable which is a string containing the text which is a link you are interested in. 
// You have to fetch all the links from a given page which contains this text

// codewithharry.com 
// javascript

// To solve this problem open any website and paste the below code in the console and also find the all links which contains desired string or word


// This problem is discussed in the 19th tutorial of old playlist of code with harry  of javascript

console.log('Practice Exercise 1')

let str = "python";
let links = document.links;
console.log(links);
let href;
Array.from(links).forEach(function(element) {
  href = element.href;
  if (href.includes(str)) {
    console.log(href);
  }
});


// This problem is discussed in the 19th tutorial of old playlist of code with harry  of javascript
