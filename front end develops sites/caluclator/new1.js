// n="2+34"
// const newArray = n.split('+').filter((e)=> {
//     if(!isNaN(Number(e))) {
//         return e;
//     }
// })
// console.log(newArray)
 let number="23+"
 var stack=[];
for(i=0;i<number.length;i++)
{
    let char=(number[i]);
    if(char>=0 && char<=9)
    {
        stack.push(parseFloat (char))
     
    }
    else if(char==='+')
    {
        a=stack.pop()
        b=stack.pop()
        result=b+a;
        
        console.log(result);

    }
}
