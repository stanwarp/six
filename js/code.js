function removeNb (n) {
  const total = (n * n) / 2 + n/2;
  const neededNumbers = []

  for (let i = 1; i < n ; i++) {
    for (let j = 2; j < n; j++) {

      if (i==j) continue

      if (i*j == total - (i+j)) neededNumbers.push([i,j])
    }
  }
  
  return neededNumbers
}

console.log(removeNb(10269))
