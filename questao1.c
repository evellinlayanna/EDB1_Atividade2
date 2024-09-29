// Faca em C uma funcao recursiva que calcule e retorne o N-esimo termo da
// sequencia Fibonacci. Alguns numeros desta sequencia sao: 0, 1, 1, 2, 3, 5, 8,
// 13, 21, 34, 55, 89. . .

#include <stdio.h>

// Funcao recursiva que calcula o N-esimo termo da sequencia Fibonacci
int fibonacci(int n) {
  // Se n for igual a 0 ou 1, retorna n
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    // Se n for maior que 1, retorna a soma dos dois termos anteriores
    return fibonacci(n - 1) + fibonacci(n - 2); // Chamada recursiva
  }
}

int main(void) {
  int n;
  printf("Insira o valor de n: ");
  scanf("%d", &n);
  printf("O N-ésimo termo fibonacci é: %d", fibonacci(n));
  return 0;
}