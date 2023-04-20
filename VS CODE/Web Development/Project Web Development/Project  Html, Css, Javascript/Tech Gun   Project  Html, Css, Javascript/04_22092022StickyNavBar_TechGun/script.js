

console.log('Hello');

let navtop = navbar.offsetTop;
window.addEventListener( 'scroll' , function() {
    let navbar = document.getElementById('navbar');
    if( window.pageYOffset >= navtop )
    {
        navbar.classList.add('stickyNav');
        console.log('yes');
    }

    else 
    {
        navbar.classList.remove('stickyNav');
        console.log('no');
    }
});




// by www.w3schools.com

// window.onscroll = function() {myFunction()};
// var navbar = document.getElementById("navbar");
// var sticky = navbar.offsetTop;

// function myFunction() {
//   if (window.pageYOffset >= sticky) {
//     navbar.classList.add("stickyNav")
//   } 
//   else {
//     navbar.classList.remove("stickyNav");
//   }
// }