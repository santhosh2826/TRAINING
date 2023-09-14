const a=[{
    name:"biscuts",
    price:50
},
{
    name:"choclates",
    price:50
}]

total=a.reduce((a,b)=>a+b.price,0)
console.log("price",total)