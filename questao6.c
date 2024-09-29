// O superfatorial de um numero N e definida pelo produto dos N primeiros
// fatoriais de N. Assim, o superfatorial de 4 e sf(4) = 1! ∗ 2! ∗ 3! ∗ 4! =
// 288. Faca uma funcao recursiva, em C, que receba um numero inteiro
// positivo N e retorne o superfatorial desse numero.

#include <stdio.h>

// Funcao recursiva que calcula o fatorial
int fatorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * fatorial(n - 1);
  }
}

// Funcao recursiva que calcula o superfatorial
int superfatorial(int n) {
  if (n == 1) {
    return 1;
  } else {
    return fatorial(n) * superfatorial(n - 1);
  }
}

int main() {
  int n;
  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &n);
  // Validacao para n ser um numero positivo
  while (n <= 0) {
    printf("Número invalido. Digite um numero inteiro positivo: ");
    scanf("%d", &n);
  }
  printf("O superfaorial de %d e %d", n, superfatorial(n));
  return 0;
}