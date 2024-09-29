// A funcao fatorial duplo e definida como o produto de todos os numeros
// naturais ımpares de 1 ate algum numero natural ımpar N. Assim, o fatorial
// duplo de 5 e 5!! = 1 ∗ 3 ∗ 5 = 15. Faca uma funcao recursiva, em C, que
// receba um numero inteiro positivo ımpar N e retorne o fatorial duplo desse numero.

#include <stdio.h>

// Funcao que calcula o fatorial duplo de um numero
int fatorial_duplo(int n) {
  if (n == 1) {
    return 1;
  } else {
    return n * fatorial_duplo(n - 2); // n - 2 para que a multiplicacao seja sempre com os numeros impares
  }
}

int main() {
  int n;
  printf("Digite um numero inteiro positivo impar: ");
  scanf("%d", &n);

  // Validacao para n ser um numero impar e positivo
  while (n <= 0 || n % 2 == 0) {
    printf("Numero invalido. Digite um numero inteiro positivo impar: ");
    scanf("%d", &n);
  }

  printf("O faorial duplo de %d e %d", n, fatorial_duplo(n));
  return 0;
}