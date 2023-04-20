

console.log("Hello");

let username = document.getElementById('username');
let password = document.getElementById('password');
// let flag = 1;


function validateForm()
{

// For Username
    if( username.value == "")
    {
        // console.log("Username Empty ")
        document.getElementById("userError").innerHTML = "User Name is Empty" ;
        flag = 0;
    }

    else if( username.value.length < 3 )
    {
        document.getElementById("userError").innerHTML = "User Name required minimum 3 character" ;
        flag = 0;
    }

    else
    {
        document.getElementById("userError").innerHTML = "" ;
        flag = 1;
    }



// for Password
    if( password.value == "")
    {
        document.getElementById("passError").innerHTML = "Password is Empty" ;
        flag = 0;
    }

    else if( password.value.length < 3 )
    {
        document.getElementById("passError").innerHTML = "Password required minimum 3 character" ;
        flag = 0;
    }

    else
    {
        document.getElementById("passError").innerHTML = "" ;
        flag = 1;
    }

    if(flag)
    {
        return true;
    }

    else 
    {
        return false;
    }


    return false;
    // return true;
    
}

// validateForm();