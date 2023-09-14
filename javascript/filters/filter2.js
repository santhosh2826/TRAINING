data=[{name:'apple',price:100},
    {name:'orange',price:150},
    {name:'mango',price:80},
    ]
    amount=120
l=data.filter(e=>e.price<amount)
console.log(l)