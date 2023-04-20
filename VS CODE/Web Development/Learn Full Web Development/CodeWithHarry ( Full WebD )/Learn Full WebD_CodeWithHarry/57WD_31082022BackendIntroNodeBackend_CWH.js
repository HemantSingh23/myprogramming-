

// console.log("Hello Hemant");


const http = require('http');

const hostname = '127.0.0.1';
const port = 3000;

const server = http.createServer((req, res) => {
  res.statusCode = 200;
//   res.setHeader('Content-Type', 'text/plain');
//   res.end('Hello World , It is Hemant Singh ');

res.setHeader('Content-Type', 'text/html');
  res.end(`
  <!DOCTYPE html>
  <html lang="en">
  <head>
      <meta charset="UTF-8">
      <meta http-equiv="X-UA-Compatible" content="IE=edge">
      <meta name="viewport" content="width=device-width, initial-scale=1.0">
      <title>Styling Links and Buttons</title>
      
      <style>
          .container 
          {
              border:2px solid red ;  
              background-color: rgb(175, 146, 72);
              padding:34px;
              margin:34px auto;
              width:666px;
          }
  
          a
          {
              text-decoration: none;  
              color: black;
          }
  
          a:hover
          {
              color: rgb(255, 47, 106);
              background-color: rgb(36, 165, 43)
          }
          
          a:visited
          {
              background-color:rgb(166, 255, 0)
          }
            
          a:active
          {
              background-color:blue;
          }
  
          .btn
          {
              background-color: rgb(0, 115, 255);
              padding:6px;
              border:none; 
              cursor: pointer;
              font-size: 13px;
              border-radius:4px;
          }
          .btn:hover
          {
              color:rgb(89, 243, 23);
              background-color: red;
              border:2px solid black;
          }
  
  
      </style>
  </head>
  <!--  -->
  
  <body>
      <div class="container" id = "cont1">
          <h3>this is my heading</h3>
          <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Blanditiis harum labore quas, ipsa minus at saepe quibusdam enim rerum sint possimus praesentium quae numquam dolore est magnam culpa temporibus tempora, autem, sapiente rem error!</p>
  
          <a href="https://yahoo.com" class="btn">Read more</a>
          <button class="btn">Contact us</button>
           
      </div>
      
  </body>
  
  
  </html>`);
});

server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
});