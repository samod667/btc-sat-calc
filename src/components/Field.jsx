import React from 'react'
import Button from './Button';

const Field = () => {

    var sat = 15;
  return (   
     <form className="form">
       <div className="form-ctr">
            <label>bitcoin:</label>
            <input type="text" />
       </div>
       <div className="form-ctr">
        <label>sats</label>
        <input type="text"/>
       </div>
          <Button />
   </form>

  )
}

export default Field