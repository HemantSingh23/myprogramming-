


const questions = [

    // Question 1
    {
        'que' : 'Which of the following is a markup language' ,
        'a' : '(a) React',
        'b' : '(b) CSS',
        'c' : '(c) JAVASCRIPT',
        'd' : '(d) HTML',

        'correct' : 'd'
    },

    // Question 2
    {
        'que' : 'Which of the following is a style language' ,
        'a' : '(a) Angular',
        'b' : '(b) node',
        'c' : '(c) CSS',
        'd' : '(d) PHP',

        'correct' : 'c'
    },

    // Question 3
    {
        'que' : 'Which of the following is a script language' ,
        'a' : '(a) JAVASCRIPT',
        'b' : '(b) PHP',
        'c' : '(c) MERN',
        'd' : '(d) React',

        'correct' : 'a'
    },

    // Question 4
    {
        'que' : 'Which of the following is a JAVASCRIPT library ' ,
        'a' : '(a) HTML',
        'b' : '(b) React',
        'c' : '(a) PHP',
        'd' : '(a) C++',

        'correct' : 'b'
    },
]

let index = 0;
let total = questions.length;
let right = 0;
let wrong = 0;
const quesBox = document.getElementById('quesBox')
const optionInputs = document.querySelectorAll('.options')

const loadQuestion = () => {
    if(index == total)
    {
        return endQuiz();
    }
    
    reset();


    const data = questions[index]
    // console.log(data)
    quesBox.innerText = ` (${index+1}) ${data.que} `;
    optionInputs[0].nextElementSibling.innerText = data.a ;
    optionInputs[1].nextElementSibling.innerText = data.b ;
    optionInputs[2].nextElementSibling.innerText = data.c ;
    optionInputs[3].nextElementSibling.innerText = data.d ;

}

const submitQuiz = () => {
    const ans = getAnswer()
    const data = questions[index]
    if( ans == data.correct)
    {
        right ++;
    }

    else
    {
        wrong++;
    }

    index++ ;
    loadQuestion();

}



const getAnswer = () => {
    let answer ;
    optionInputs.forEach( (inputselect) => {
           if(inputselect.checked)
            {
                // console.log("yes") // if input will checked or selected then yes
                // console.log(inputselect.value)
               answer =  inputselect.value
            }
        }
    )
    return answer;
}

const reset = () => {
    optionInputs.forEach( (inputselect) => {
        inputselect.checked = false;
        }
    )
}


const endQuiz = () => {
    document.getElementById("box").innerHTML = 
    `
        <div style = "text-align:center">
            <h3> Thank You For Playing the Quiz </h3>
            <h2> Your score is ${right} / ${total}  </h2>
        </div>
    `
}


loadQuestion() ;











