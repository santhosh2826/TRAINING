
// function result() {
// 	let n = display.value;
// 	let str = n.split('+');
// console.log(str);
// 	s=str.reduce((str,b)=>Number(str)+Number(b));
//     console.log(s);
// 	display.value = s;
// }
let history = []
function backspace()  
{  
var exp = display.value;  
display.value= exp.substring(0, exp.length - 1); /* remove the element from total length ? 1 */  
}  
function result()
{
	if(display.value.includes("+") )
	{
		let n = display.value;
	let str = n.split('+');
console.log(str);
	s=str.reduce((str,b)=>Number(str)+Number(b));
    console.log(s);
	display.value = s;
	history.push(n,s)
	}
	else if(display.value.includes("-"))
	{
		let n = display.value;
	let str = n.split('-');
	s=str.reduce((str,b)=>Number(str)-Number(b));
	display.value = s;
	history.push(n,s)
	console.log('hi'+history)
	}
	else if(display.value.includes("*"))
	{
		let n = display.value;
	let str = n.split('*');
console.log(str);
	s=str.reduce((str,b)=>Number(str)*Number(b));
    console.log(s);
	display.value = s;
	history.push(n,s)
	
	}
	else if(display.value.includes("/"))
	{
		let n = display.value;
	let str = n.split('/');
console.log(str);
	s=str.reduce((str,b)=>Number(str)/Number(b));
    console.log(s);
	display.value = s;
	history.push(n,s)
	}
}
function r()
{
	display.value=history.join('\n');
}


