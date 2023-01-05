#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  if (argc < 2){ printf("No args!\n"); return 0; }
  int b = atoi(argv[1]);

  int total = b * b / 2 + (b + 1) / 2;

  printf("[ ");
  for ( int i = 1; i < b; i++) {
    if (!(usedNumbers < 10)) {break;}

    for ( int j = i; j < b; j++) {
      if ( i == j) { continue; }
      if (i*j == total - (i+j)) {
        printf("[ ");
        printf("%d", i);
        printf(", %d", j);
        printf(" ]");
      }
    }
  }
  
  printf(" ]\n");
}


