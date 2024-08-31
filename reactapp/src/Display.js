import React from 'react'

function Display(props) {
  return (
    <div>
        <h2>Current Weather in {props.name}</h2>
        <p>Temperature : 20 C</p>
        <p>Condition : Sunny</p>
    </div>
  )
}

export default Display