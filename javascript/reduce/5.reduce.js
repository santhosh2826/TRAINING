function count(arr) {
    
    return arr.reduce((result, currentString) => {
      if (result.hasOwnProperty(currentString)) {
        result[currentString]++;
      } else {
        result[currentString] = 1;
      }
      return result;
    }, {});
  }
  
  // Example usage:
  const strings = ["apple", "banana", "apple", "cherry", "banana", "apple"];
  const Counts = count(strings);
  console.log(Counts);
  