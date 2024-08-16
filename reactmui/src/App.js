import React,{useState} from 'react'
import {Button,TextField,Container,Typography} from '@mui/material'
function App() {
  const [name,setName]=useState('')
  const handleChange=(e)=>{
    setName(e.target.value);
  }
  const handleSubmit=()=>{
    alert("Hello "+name)
  }
  return (
    <Container maxwidth="sm" style={{marginTop:'50px'}}>
      <Typography variant="h4" gutterBottom>Welcome All to Material UI</Typography>
      <TextField label="Enter Your Name : "
      variant='outlined'
      fullwidth value={name}
      onChange={handleChange}
      style={{marginBottom:'20px'}}/><br></br>
      <Button variant="contained" color="primary" onClick={handleSubmit}>Submit</Button>
    </Container>
  )
}
export default App
