


console.log('this is tut 16');


let element = document.createElement('li');
let text = document.createTextNode('I am  a text node');
element.appendChild(text)

// Add a class name to the li element
// element.className = 'childul';
// element.id = 'createdLi';
// element.setAttribute('title', 'mytitle');
// element.innerText = '<b>Hello this is created by harry</b>';
// element.innerHTML = '<b>Hello this is created by harry</b>';

let ul = document.querySelector('ul.this');
ul.appendChild(element);
console.log(ul)
console.log(element)





let elem2 = document.createElement('h3');
elem2.id = 'elem2';
elem2.className = 'elem2';
let tnode = document.createTextNode('This is a created node for elem2');
elem2.appendChild(tnode);

element.replaceWith(elem2);
let myul = document.getElementById('myul');
myul.replaceChild(element, document.getElementById('fui'));
myul.removeChild(document.getElementById('lui'));


let pr = elem2.hasAttribute('href');
elem2.removeAttribute('id');
elem2.setAttribute('title', 'myelem2title');
console.log(elem2, pr);





// quick quiz
// create a heading element with text as "Go to CodeWithHarry" and create an a tag outside it with href = "https://www.codewithharry.com"


// let head = document.createElement('h1');
// let textnode = document.createTextNode('Quick Quiz Go to CodeWithHarry ');
// head.appendChild(textnode);
// let heading = document.querySelector('ul.this');
// heading.appendChild(head);

// let tag = document.createElement('a');
// tag.setAttribute('href' , 'https://www.codewithharry.com' );
// tag.setAttribute("target", "_blank");
// head.appendChild(tag);

// console.log(head);



// below is of any comment of this video

// / Make element what I want
// let h1Tag = document.createElement("h1");
// h1Tag.append("Go to Code With Harry");

// let aTag = document.createElement("a");
// aTag.setAttribute("href", "https://www.codewithharry.com");
// aTag.setAttribute("target", "_blank")
// aTag.append(h1Tag)

// // Where to set element
// let element = document.getElementById("1234");
// element.replaceWith(aTag)
// console.log(h1Tag);
// console.log(aTag);
// console.log(element);