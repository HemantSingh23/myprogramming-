
console.log("17JS") ;  




//  //  object Destructuring ==>

const band = {
    bandName : "led zepplin" ,
    famousSong : "stairway to heaven",
    year : 2001 ,
    anotherSong : "Bandeya"

} ;


//  // 1st way ==>

// const bandName = band.bandName;
// const famousSong  = band.famousSong;
// console.log(bandName, famousSong) ; 

// or

// const var1 = band.bandName;
// const var2  = band.famousSong;
// console.log(var1, var2) ; 


//  // 2nd way ==>

// const {bandName, famousSong} =  band ;
// console.log(bandName, famousSong) ; 

// or

// const {bandName : var1 , famousSong : var2} =  band ;
// console.log(var1, var2) ; 

//  //  //  can't do the below ==>
// const {var1, var2} =  band ;
// console.log(var1, var2) ;  // print  undefined undefined


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


const {bandName, famousSong, ...rest} =  band ;
console.log(bandName, famousSong, rest) ; 




































