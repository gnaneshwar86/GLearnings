import React, {Component} from 'react';
class StateManip extends Component{
    constructor(){
        super();
        this.state={message:'ON'};
    }
    toggleMessage=()=>{
        this.setState(prevstate=>({
            message : prevstate.message === 'ON'? 'OFF':'ON'
        }))
    }
    render(){
        return(
            <div>
                <h1>{this.state.message}</h1>
                <button onClick={this.toggleMessage}>ClickMEEEEE</button>
            </div>
        )
    }
}
export default StateManip;