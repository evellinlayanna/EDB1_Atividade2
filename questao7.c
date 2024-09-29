// Os numeros de Pell sao definidos pela seguinte recursao:
// p(n) = {
//  0 se n=0
//  1 se n=1
//  2p(n−1) + p(n−2) se n>2
// }
// Alguns numeros desta sequencia sao: 0, 1, 2, 5, 12, 29, 70, 169, 408, 985...
// Faca uma funcao recursiva, em C, que receba um numero N e retorne o N-esimo numero de Pell.

#include <stdio.h>

// Funcao recursiva que calcula o numero de Pell
int numero_pell(int n) {
  if (n == 0) {
    // Se n for igual a 0, retorna 0
    return 0;
  } else if (n == 1) {
    // Se n for igual a 1, retorna 1
    return 1;
  } else {
    // Se n for maior que 1, retorna 2 * pell(n - 1) + pell(n-2)
    return 2 * numero_pell(n - 1) + numero_pell(n - 2);
  }
}

int main() {
  int n;
  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &n);
  printf("O numero de pell de %d é %d", n, numero_pell(n));
  return 0;
}