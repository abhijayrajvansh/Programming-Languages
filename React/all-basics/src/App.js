import React from 'react';

// using fat arrow key function
const App = () => {
  return (
    <> 
      <SecondComponentFun/>
      <SecondComponentFun/>
      <SecondComponentFun/>
      <h4>example od nested component</h4>
      <h1 className='myclassname'>Welcome Mr.Rajvansh {2 + 1}</h1> 
      <p>This is an example of a paragram 'p' tag</p>
    </>
  );
};

const SecondComponentFun = () => {
  return (
    <h3>This is the part of another component created apart from default</h3>
  );
};

// <React.Fragment> has a short for of <> and </>
export default App;


