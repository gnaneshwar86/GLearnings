import React, {Component} from 'react';
class Counting extends Component{
    constructor(){
        super();
        this.state={count:1};
    }
    Increment=()=>{
        this.setState({count:this.state.count+1});
    }
    Decrement=()=>{
        this.setState({count:this.state.count-1});
    }
    render(){
        return(
            <div>
                <h1>Count: {this.state.count}</h1>
                <button onClick={this.Increment}>Increment</button>
                <button onClick={this.Decrement}>Decrement</button>
            </div>
        )
    }
}
export default Counting;