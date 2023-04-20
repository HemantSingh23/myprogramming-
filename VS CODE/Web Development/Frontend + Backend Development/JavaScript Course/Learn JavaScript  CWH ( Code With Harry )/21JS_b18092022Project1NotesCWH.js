


// Project-1 Notes Taking Website  



console.log("Welcome to notes app. ");
showNotes(); // we put it here so that as we load the page al the notes should be visible in tha page


// if user adds the note then add  to the local storage

let addBtn = document.getElementById('addBtn');
addBtn.addEventListener('click',function(e){
    let addTxt = document.getElementById('addTxt'); // when click in the Add Note button then take the text in the addTxt variable written in the textarea(which has id addBtn)  
    let notes = localStorage.getItem("notes"); // because we don't know whether notes already present in the local storage or not 
    // so take it from the local storage
    if(notes == null)
    { // if notes not  in the local storage then make an blank array
        notesObj = [];
    }

    else
    { // if notes present in the local storage then make an array of the notes which is already present in the local storage
        notesObj = JSON.parse(notes);
    }

    notesObj.push(addTxt.value); // add the text(written by user in the textarea) in the notesObj array
    localStorage.setItem("notes", JSON.stringify(notesObj)) ;// stringify convert array in the string
    addTxt.value = '';  // make blank the text area again

    // console.log(notesObj);
    
    showNotes(); // To display the notes we make the function 
    
})


// To display the notes 

function showNotes()
{
    let notes = localStorage.getItem("notes"); // we again take the notes from the local storage 
    if(notes == null)
    { // if notes not  in the local storage then make an blank array
        notesObj = [];
    }

    else
    { // if notes present in the local storage then make an array of the notes which is already present in the local storage
        notesObj = JSON.parse(notes);
    }

    let html = " ";

    notesObj.forEach( function ( element , index){
        html += `
            <div class="noteCard my-2 mx-2 card" style="width: 18rem;">
                    <div class="card-body">
                        <h5 class="card-title">Note ${index + 1}</h5>  
                        <p class="card-text"> ${element}</p>
                        <button id ="${index}" onclick="deleteindex(this.id)"  class="btn btn-primary">Delete Note</button>
                    </div>
            </div>
            `;

            // above ${index + 1} print the number of notes menas 1, 2, 3, 4 etc. 
            // ${element} it print the notes which is the notesObj array with respective index
    });
    
    
    let notesElm = document.getElementById("notes"); // here notes is the id of the div element in the html file which is after the <h1>Your Notes</h1> 
    if(notesObj.length != 0)
    {
        notesElm.innerHTML = html;
    }

    else
    {
        notesElm.innerHTML = `Nothing to show! Use "Add a Note" section above to add notes.`;
    }
}


// Function to delete the notes 
    function deleteindex(index)
    {
        // console.log('I am deleting' ,index );
        

        let notes = localStorage.getItem("notes"); 
        if(notes == null)
        { 
            notesObj = [];
        }

        else
        { 
            notesObj = JSON.parse(notes);
        }

        notesObj.splice(index, 1); // here 1 means delete the same index in which we click or delete the same note in which note we click Delete note button
        // when we click on the Delete Note button in the website then it takes the notes index
        // means which we want to delete if we delete Note 4 then index will be 3 and it will delete that Note and 
        localStorage.setItem("notes", JSON.stringify(notesObj)); // it modified the local storage again 
        showNotes();

    }


// To search any notes 
    let search = document.getElementById('searchTxt')  // take it id of search box of the website
    search.addEventListener("input" , function(){ //if we input anything in the search box then it will fired means addeventlistener will be active

        let inputVal = search.value.toLowerCase(); 
        // if we type anythings in the search box then it takes all the value 
        //and store in the inputVal variable  here  toLowerCase() convert the text in the lowercase which we enter in the search box

        // console.log("input event fired", inputVal);

        let noteCards = document.getElementsByClassName('noteCard')   // it takes the class of the notes( like Note 1 , Note 2 etc. ) 
        //which we will make and store in the noteCards variable

        Array.from(noteCards).forEach(function( element ){ // make the array of noteCards variable 
            // then loop will go to every notes 
            //and store value in the element 

            let cardTxt = element.getElementsByTagName("p")[0].innerText; 
            // here in each element it find by tag name which is p so
            //  it find the paragraph tag but only one p tag so that't why  [0]
            // and finally store it in the cardTxt variable
            // means it store the innerText of the p tag in cardTxt

            if( cardTxt.includes(inputVal)) // if the input enter by user
            // in the search box will be in the cardTxt or in the p tag innerTex 
            // then this condition will be true
            { // if condition true then it block that element which cardTxt or p tag innerText will match the input(enter in the search box) 
                element.style.display = "block";
            }

            else
            {
                element.style.display = "none";
            }


            // console.log(cardTxt);
        })
    });



    