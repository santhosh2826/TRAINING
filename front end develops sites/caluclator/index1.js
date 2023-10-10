
    
var str = '2-3+2';
var numbers = str.split('-');
var sum = 0;
console.log(numbers);
for (var i = 0; i < numbers.length; i++) {
    sum += parseInt(numbers[i]);
}
console.log(str + ' = ' + sum);


