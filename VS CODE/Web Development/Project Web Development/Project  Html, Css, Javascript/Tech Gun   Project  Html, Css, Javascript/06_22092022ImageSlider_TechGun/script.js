

console.log("Hello");

let flag = 0;

function controller(x)
{
    flag = flag + x ;
    sliderShow(flag) ;

}

sliderShow(flag);

function sliderShow(num)
{
    let slides = document.getElementsByClassName('slide');
    // console.log(slides);
    // console.log(slides.length);

    if(num == slides.length)
    {
        flag = 0;
        num = 0;
    }

    if(num < 0 )
    {
        flag = slides.length -1;
        num = slides.length -1;
    }

    for( let y of slides )
    {
        y.style.display = "none";
    }

    // console.log(num);

    slides[num].style.display = "block" ;
}