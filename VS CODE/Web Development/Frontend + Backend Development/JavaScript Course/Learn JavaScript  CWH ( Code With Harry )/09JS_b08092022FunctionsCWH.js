


  console.log('this is tut 10');




  // function mygreet(name, thank='Thank You')
  // {
  //     let msg = `Happy Birthday ${name} How I wish I could fly to you right now and be with you on this special day of yours. But remember, my good wishes are always there with you. ${thank}!`;

  //     return msg;
  // }
  
  // let name = 'SkillF';
  // let name2 ='Rohan';
  // let val = mygreet(name, 'Thanks a lot');
  // console.log(val);


  const mygreet = function(name, thank='Thank You')
  {
      let msg = `Happy Birthday ${name} How I wish I could fly to you right now and be with you on this special day of yours. But remember, my good wishes are always there with you. ${thank}!`;

      return msg;
  }
  
  let name = 'SkillF';
  let name2 ='Rohan';
  let val = mygreet(name, 'Thanks a lot');
  console.log(val);
  
  
  const myobj = 
  {
      name: "SkillF",
      game: function()
      {
          return "GTA";
      }
  }
  console.log(myobj.game())
  


  arr = ['fruit', 'vegetable', 'furniture'];
  arr.forEach(function(element, index, array) 
  {
      console.log(element, index , array)
  });         
  




  




  var i = 234;
  function ui(name)
  {
    var i = 9;
    console.log(i);
    return `This is a ${name} ui`;
  }
  console.log( ui("Hemant") , i) 
  //in above line  i will be 234 because in function we declare a new variable inside the function whic is local variable not  modify the i 




  console.log('Another');



  var j = 234 ;
  function oi(name)
  {
    j = 9;
    console.log(j);
    return `This is a ${name} oi`;
  }
  console.log( oi("Pushpendra") , j) 
  //in above line  j will be 9 because in function we  modify the j






  console.log('for let variable');


  let m = 234 ;
  function mi(name)
  {
    let m = 9;
    console.log(m);
    return `This is a ${name} mi`;
  }
  console.log( mi("Pushpendra") , m) 
  //in above line  m will be 234 because in function we declare a new variable inside the function whic is local variable not  modify the m



  console.log('Another');



  let n = 234 ;
  function ni(name)
  {
    n = 9;
    console.log(n);
    return `This is a ${name} ni`;
  }
  console.log( ni("Pushpendra") , n) 
  //in above line  n will be 9 because inside the function we  modify the n


  console.log('For let also same as var variable');






  console.log('Now another medhod');



  if(1)
  {
      let a =235;
      console.log(a)
  }
//   console.log(a); 
// if we declare let a inside the function then above line give error because let is block level scope variable

console.log('Now for  var variable ');

if(1)
  {
      var b =236;
      console.log(b)
  }
  console.log(b); 
// if we declare var b inside the function then above line does not give error because var is global level scope variable
  



