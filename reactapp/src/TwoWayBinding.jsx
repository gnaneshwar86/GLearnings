import React, {Component} from 'react';
class TwoWayBinding extends Component{
    constructor(){
        super();
        this.state={value:''};
    }
    Change=(e)=>{
        this.setState({value:e.target.value})
    }
    render(){
        return(
            <div>
                <input type="text" value={this.state.value} onChange={this.Change}/>
                <h1>{this.state.value}</h1>
            </div>
        )
    }
}
export default TwoWayBinding;