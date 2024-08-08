#include <stdio.h>

int main(void) {
  int x = 10; // valor da pontuação do jogador

  if (x < 10) {
    printf("Insuficiente\n");
  } else if (x < 40) {
    printf("Regular\n");
  } else if (x < 70) {
    printf("Bom\n");
  } else if (x < 90) {
    printf("Otimo\n");
  } else {
    printf("Excelente\n");
  }

  return 0;
}