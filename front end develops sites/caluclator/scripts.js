let firstNumber
let secondNumber
let step = 0
let operation
let result = 0

let numArray = []
let secondNumberArr = []
let thirdNumber=[]

let display = document.getElementById('display')

function getNumber(num) {
	if (step === 0 || step === 1) {
		numArray.push(num)
		step = 1
		firstNumber = Number(numArray.join(''))
		display.value += firstNumber
	} else if (step === 2) {
		secondNumberArr.push(num)
		secondNumber = Number(secondNumberArr.join(''))
		display.value += secondNumber
	}
	else if(step === 3 ){
		thirdNumberArr.push(num)
		thirdNumber = Number(thirdNumberArrNumberArr.join(''))
		display.value += thirdNumber
	}
}

function getOperator(operator) {
	step = 2
	display.value += operator
	operation = operator
}

function calculateResult() {
	console.log('first number', firstNumber, 'second number', secondNumber)
	if (operation === '+') {
		result = firstNumber + secondNumber
		display.value += '='+result
	} else if (operation === '-') {
		result = firstNumber - secondNumber
		display.value += '='+result
	} else if (operation === '*') {
		result = firstNumber * secondNumber
		display.value += '='+result
	} else if (operation === '/') {
		result = firstNumber / secondNumber
		display.value += result
	}
}
function clearDisplay() {
	display.value = 0
	firstNumber = null
	secondNumber = null
	step = 0
	operation = null
	result = 0
	numArray = []
	secondNumberArr = []
}
