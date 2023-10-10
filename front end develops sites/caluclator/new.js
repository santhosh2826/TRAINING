//unshift
n="12+2-3+2";
let x;
let final=[];
if(n.includes("+") ){
    x=n
let str = x.split('+')
const a1=str.filter((e)=> {
    if(!isNaN(Number(e))) {
        return e;
    }
})

    console.log(str)
    console.log(a1)


// console.log(str);\
for(let i=0;i<=str.length-1;
    i++)
    {
        if(str[i].includes("*")){
           var  x2 =str[i].split('*');
            // .reduce((a,b)=>{
                // return Number(a)*Number(b)
            // });
            const a2=x2.filter((e)=> {
                if(!isNaN(Number(e))) {
                    return e;
                }
            })
                console.log(x2)
                console.log(a2)
            
        
        for(let j=0;j<=x2.length-1; j++)
            {
                if(x2[j].includes("-")){
                    let x4=x2[j].split('-');
                    console.log(x4);
                   
                }
            }
        }

    }
    // total = final.reduce((a,b)=> {
    //     return Number(a)+Number(b)
    // })
}
	

// console.log(final)
// console.log(total)