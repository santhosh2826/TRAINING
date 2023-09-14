a=[{
    quantity:3,
    price:10
}]
s=a.reduce((a,{quantity,price})=>{
return a+quantity*price;
},0)
console.log(s)