// //
// let n="santhosh";
// let a=n.length;
// console.log(a);
// function add(num){
// if(num%2==0){
// return true;
// }
// else{
//     return false;
// }
// }
// // console.log(add(3))
// a=["santhosh","santhiya","vinoth"]
// // a.forEach((e,i,a) =>{
// //     a[i]=e.toUpperCase()
// // });
// // console.log(a)
// s=a.map(e=>e.charAt(0).toUpperCase()+e.slice(1))
// console.log(s)
// console.log(a)
// [a,a,d,f]
// [{a:2},{d:1}]

// b=[1,2,3]
// c=b.filter((e)=>e%2==0)
// console.log(c);
// data=[{name:'apple',price:100},
//     {name:'orange',price:150},
//     {name:'mango',price:80},
//     ]
// amount=120
// l=data.filter(e=>e.price<amount)
// console.log(l)
a=[1,2,4]
// function sum(){
// a1=a.filter(e=>e%2==0)
// console.log(a1)
// }

// s=a.map(sum);
// console.log(s)
// total=a.reduce((a,b)=>{
//     console
//       return a+b
// },0)
// console.log(total)
const person = [
    { id: 1, name: 'Santhosh', age: 30, gender: 'Male', salary: 50000 },
    { id: 2, name: 'Santhiya', age: 28, gender: 'Female', salary: 48000 },
    { id: 3, name: 'Vinoth', age: 35, gender: 'Male', salary: 55000 },
    { id: 4, name: 'Agalya', age: 25, gender: 'Female', salary: 46000 },
    { id: 5, name: 'Vasanth', age: 40, gender: 'Male', salary: 60000 }
  ];

s=person.reduce((a,b)=>a+b.salary,0)
console.log(s)