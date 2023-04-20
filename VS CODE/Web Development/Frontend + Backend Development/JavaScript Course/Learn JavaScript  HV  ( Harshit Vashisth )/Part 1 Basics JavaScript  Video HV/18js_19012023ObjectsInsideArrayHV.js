
console.log("18JS") ;  



//  // Objects Inside the Array ==>
// it is very useful in real world  Application 


const users = [
    {userId : 1 , firstName : 'Hemant', gender :'male'},
    {userId : 2 , firstName : 'Ashish', gender :'male'},
    {userId : 3 , firstName : 'Pushpendra', gender :'male'}
]
console.log(users);

for(let user of users)
{
    // console.log(user) ; // print all three object
    console.log(user.userId) ; // print only userId of all three object
    console.log(user.firstName) ; // print only firstName of all three object
    console.log(user.gender) ; // print only gender of all three object
}


//  //  Nested Destructuring ==>

const [user1, user2, user3] = users;
console.log(user1);


//  // if we want first name of object 1 and gender of object 3 then =>
const [{firstName}, , {gender}] = users;
console.log(firstName);
console.log(gender);

// const [{firstName : user1firstName}, , {gender:user3gender}] = users;
// console.log(user1firstName);
// console.log(user3gender);


const [{firstName : user1firstName, userId}, , {gender:user3gender}] = users;
console.log(user1firstName);
console.log(userId);
console.log(user3gender);






































