#include <stdio.h>

int main() {
  int i;
  printf("Números inteiros pares entre 1 e 50:\n");
    for (i = 2; i <= 50; i += 2) {
    printf ("%d ", i);
  }

  printf("\n");
  return 0;

}