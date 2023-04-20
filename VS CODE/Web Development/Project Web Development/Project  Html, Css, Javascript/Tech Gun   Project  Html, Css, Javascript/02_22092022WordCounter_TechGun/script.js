
console.log("Hi");

let textBox = document.getElementById("textBox")

textBox.addEventListener ( 'input' , function() {

    let text = this.value
    
    // for characters count
    let charLength = text.length;
    // console.log(charLength);
    document.getElementById("char").innerText = charLength;

    // for words count
    text = text.trim();
    let word = text.split(' ');
    console.log(word);
    let cleanList = word.filter( function(elm) {
        return elm != " ";
    })
    console.log(cleanList);

    document.getElementById("word").innerText = cleanList.length;


});



