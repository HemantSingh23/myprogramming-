


console.log('Tutorial 21 exercise 2 JavaScript');
/*
You have to create a div and inject it into the page which contains a heading.
whenever someone clicks on the div, it should be converted into an editable item. whenever user clicks away (blur). save the note into the local storage.

*/




console.log('This is discussed in tutorial 25')

// Create a new element
let divElem = document.createElement('div');


// Add text to that created element
let val = localStorage.getItem('text');
let text;

// if (val=="Yes") // if in textarea we write only 'Yes' or we romove everything
if (val==null)     // (means 'null') from text area and refresh the page then only it will run
{
 text = document.createTextNode('This is my element. click to edit it');
}

else
{
    text = document.createTextNode(val);
}





divElem.appendChild(text);

// Give element id, style and class
divElem.setAttribute('id', 'elem');
divElem.setAttribute('class', 'elem');
divElem.setAttribute('style', 'border:2px solid black; width: 154px; margin: 34px; padding:23px;');


// Grab the main container
let container = document.querySelector('.container');
let first = document.getElementById('myfirst');
// Insert the element before element with id first
container.insertBefore(divElem, first);
// console.log(divElem, container, first)
console.log(divElem);




// add event listener to the divElem
divElem.addEventListener('click', function () {
    let noofTextAreas = document.getElementsByClassName('textarea').length;
    if(noofTextAreas == 0){
    let html = elem.innerHTML;
    divElem.innerHTML = ` <textarea class="textarea form-control" id="textarea" rows="3">${html}</textarea> `;
    }

    //listen for the blur event on textarea
    let textarea = document.getElementById('textarea');
    textarea.addEventListener('blur', function() {
        // elem.innerHTML = textarea.value; // Maybe there is no need for this line because we already
        // store the textarea value in the localStorage - according to me
        localStorage.setItem('text', textarea.value);
    });
});

 