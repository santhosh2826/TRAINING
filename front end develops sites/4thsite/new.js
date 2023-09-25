// let myString = "12345";
// let wordsArray = myString.split(' ');

// if (wordsArray.length >= 4) {
//     let firstTwoWords = wordsArray.slice(0, 2).join(' ');
//     let lastTwoWords = wordsArray.slice(-2).join(' ');

//     let concatenatedString = firstTwoWords + ' ' + lastTwoWords;
//     console.log(concatenatedString);
// } else {
//     console.log('Not enough words in the string.');
// }
// let number = 12345;
// let digitArray = number.toString().split('').map(Number);

// console.log(digitArray);
let number = 11+11;
let digitArray = number.toString().split('').map(Number);

console.log(digitArray);

if (digitArray.length >= 4) {
    let firstTwoDigits = digitArray.slice(0, 2).join('');
    let lastTwoDigits = digitArray.slice(-2).join('');

    let concatenatedDigits = firstTwoDigits + lastTwoDigits;
    console.log(concatenatedDigits);

    let sumOfConcatenatedNumbers = parseInt(firstTwoDigits) + parseInt(lastTwoDigits);
    console.log(sumOfConcatenatedNumbers);
} else {
    console.log('Not enough digits in the array.');
}
