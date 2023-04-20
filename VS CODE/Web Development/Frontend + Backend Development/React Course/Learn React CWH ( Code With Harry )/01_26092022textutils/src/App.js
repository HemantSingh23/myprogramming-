// import logo from './logo.svg';
import './App.css';

let name = "Pushpendra"
function App() {
  return (
  // if we using the JSX in react  then return only one element tag
  // if want to use two element then start with <> and end with </>
  // <>
  // <h1>After 26092022 , today's Date is 29092022 </h1>
  //   <div className="App">
  //     <header className="App-header">
  //       <img src={logo} className="App-logo" alt="logo" />
  //       <p>
  //         Edit <code>src/App.js</code> and save to reload.
  //       </p>
  //       <a
  //         className="App-link"
  //         href="https://reactjs.org"
  //         target="_blank"
  //         rel="noopener noreferrer"
  //         >
  //         Learn React 1st time Hemant Singh (Date 26092022)
  //       </a>
  //     </header>
  //   </div>
  // </>

    <>
    <nav>
      <li>Home</li>
      <li>About</li>
      <li>Contact Us</li>
      

      <div className="container">
        <h1>Hello {name} </h1>
        <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Beatae in dolore aspernatur ipsum libero delectus laudantium repudiandae eum sunt, impedit facere. Maxime repellendus quas ut illum dignissimos commodi asperiores quo.</p>

      </div>

    </nav>
    </>


  );
}

export default App;
