a=[{
    name:"aan"
},
{
    name:"van"
}]
n=a.map(e=>e.name.charAt(0).toUpperCase()+e.name.slice(1))
console.log(n)