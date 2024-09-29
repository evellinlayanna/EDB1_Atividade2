// Crie um programa em C, que contenha uma funcao recursiva que receba dois
// inteiros positivos k e n e calcule kn. Utilize apenas multiplicacoes. O
// programa principal deve solicitar ao usuario os valores de k e n e
// imprimir o resultado da chamada da funcao.

#include <stdio.h>

// Funcao recursiva que calcula k*n
int multiplicacao(int k, int n) {
  if (n == 0) {
    return 0;
  } else {
    return k + multiplicacao(k, n - 1);
  }
}

int main() {
  int k, n;

  printf("Digite o valor de k: ");
  scanf("%d", &k);

  printf("Digite o valor de n: ");
  scanf("%d", &n);

  // Chamada da funcao recursiva
  if (k > 0 && n > 0) {
    int resultado = multiplicacao(k, n); // Se k e n forem positivos, a funcao  retorna o resultado da multiplicacao                     
    printf("%d x %d = %d", k, n, resultado);
  } else { // Se k ou n forem negativos, a funcao retorna a mensagem abaixo
    printf("Os valores de k e n devem ser maiores que 0.");
  }

  return 0;
}