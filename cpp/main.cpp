#include <iostream>
#include <array>

int main(int argc, char* argv[]) {
  if (argc < 2){
    return 1;
  }
  long n = strtol(argv[1], NULL, 10);
  int total = (n * n) / 2 + (n+1) / 2;

  std::array<std::array<int, 2>, 10 > neededNumbers;

  int index = 0;
  for ( int i = 1; i < n; i++) {
    for ( int j = 1; j < n; j++) {
      if (i*j == total - (i+j)) { 
        neededNumbers[index][0] = i;
        neededNumbers[index][1] = j;
        index += 1;
      }
    }
  }

  /* std::cout << "["; */
  /* for (int i = 0; i < index; i++){ */
  /*   if (i > 0) { */
  /*     std::cout << ","; */
  /*   } */
  /*   std::cout << " [ " << neededNumbers[i][0] << ", " << neededNumbers[i][1] << " ]"; */
  /* } */
  /* std::cout << " ]\n"; */
  return 0;
}
