// a=[1,2,3,4,5]
// for(let i of a)
// {
//     console.log(i)
// }

// a=[1,2,3]
// function add(e)
// {
// console.log(e)
// }
// a.forEach(add);
// a=[1,2,3,4]
// print=function(e)
// {
//     console.log(e)
// }
// a.forEach(print)
// a=[1,2,3]
// // s=(e)=>{console.log(e)}
// // a.forEach(s)
    
// a.forEach(e => {console.log(e)
    
// });
// a=[1,2,3,4,5]
// // //  n=a.map(e=>e*2)
// // // console.log(n)
// // a.forEach(e=>console.log(e))
// n=a.(function (e){return e})
// console.log(n)

a=["a","b","c"]
a.forEach((e,i,arr) => {
    let x=0
 for(i=0;i<a.length;i++)
 {
    if(e==a[i])
    {
        x++;
    }
 }
 console.log({[e]:x})
});
