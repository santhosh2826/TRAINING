//add two array
const a=[1,2,3]
 const b=[4,5]
 const c=[]
 if(a.length===b.length){
a.forEach((e,i,arr) => {
    c.push(a[i]+b[i])
    
});
console.log(c);
 }
 else
 {
console.log("no")
 }
//concate two array
b.forEach(element => {
    a.push(element)
    
});
console.log(a);