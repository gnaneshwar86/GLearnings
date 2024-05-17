process.stdin.on('data',number =>{
    var a=parseInt(number)
    var b=number.toString()
    var l=b.length
    var sum=0
    for(let i=0;i<l;i++){
        sum+=Math.pow(parseInt(b[i]),l)
    }
    if(a==sum){
        console.log("Its an Amstrong Number")
    }
    else{
        console.log("Its not an Amstrong Number")
    }
process.exit()
});