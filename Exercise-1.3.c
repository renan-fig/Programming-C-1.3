#include <stdio.h>

int main(void) {
  float x;
  printf("Digite o valor: ");
  scanf("%f", &x);
    printf("Valor total a pagar: %.2f", x+x/10);
  return 0;
}
