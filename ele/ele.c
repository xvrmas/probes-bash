#include <stdio.h>

int main(void) {
  int i, j;
  for (i = 1; i <= 10; i++) {
    for (j = 1; j <= 10; j++) {
      if ( i == 10  || j == 1) {
        printf("%d,",j);
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}
