// Escreva uma funcao recursiva, em C, que determine quantas vezes um dıgito
// K ocorre em um numero natural N. Por exemplo, o dıgito 2 ocorre 3 vezes em 762021192.

#include <stdio.h>
#include <string.h>

// Funcao recursiva que calcula quantas vezes um digito aparece em um numero
int conta_digito(long long int n, int k) {
  if (n == 0) {
    // Se o número for 0, retorna 0
    return 0;
  } else {
    if (n % 10 == k) {
      // Incrementa a contagem se o digito for igual a k
      return 1 + conta_digito(n / 10, k);
    } else {
      // Chama a função recursivamente para o próximo dígito sem incrementar a contagem
      return conta_digito(n / 10, k);
    }
  }
}

int main() {
  int n, k;

  printf("Digite um numero inteiro positivo (máximo 9 dígitos): ");
  scanf("%d", &n);

  // Validacao para n ser no máximo 9 digitos
  if (n < 0 || n > 999999999) {
    printf("O número não pode ser negativo ou ter mais de 9 dígitos.\n");
    return 1;
  }

  printf("Digite um digito para ser contado: ");
  scanf("%d", &k);

  // Validacao para k ser apenas um digito
  if (k < 0 || k > 9) {
    printf("O digito deve ser um numero entre 0 e 9.\n");
    return 1;
  }

  int ocorrencias = conta_digito(n, k);
  printf("O digito %d ocorre %d vezes em %d.\n", k, ocorrencias, n);
  return 0;
}