// Faca em C uma funcao recursiva que permita somar os elementos de um
// vetor de inteiros.

#include <stdio.h>

// Funcao recursiva que soma os elementos de um vetor de inteiros
int somaVetor(int vetor[], int tamanho) {
  if (tamanho == 0) {
    return 0;
  } else {
    // Chamada recursiva que soma o elemento atual com a soma dos elementos
    // anteriores
    return vetor[0] + somaVetor(vetor + 1, tamanho - 1);
  }
}

int main() {
  int vetor[] = {1, 2, 3, 4, 5};
  // O tamanho do vetor é o número de elementos que ele contém
  int tamanho = sizeof(vetor) / sizeof(vetor[0]);
  int soma = somaVetor(vetor, tamanho);

  printf("A soma dos elementos do vetor é: %d", soma);

  return 0;
}

// VERIFICAR ESSE CÓDIGO ABAIXO

// #include <stdio.h>
// #include <stdlib.h> // Include stdlib.h for dynamic memory allocation

// int somaVetor(int vetor[], int tamanho){
//   if(tamanho == 0){
//     return 0;
//   } else {
//     return vetor[0] + somaVetor(vetor + 1, tamanho - 1);
//   }
// }

// int main(){
//   int tamanho;

//   printf("Insira o tamanho do vetor: ");
//   scanf("%d", &tamanho);

//   // Dynamically allocate memory for the vector
//   int *vetor = (int *)malloc(tamanho * sizeof(int));

//   if (vetor == NULL) {
//     printf("Erro: Falha na alocação de memória.\n");
//     return 1; // Indicate error
//   }

//   printf("Insira os elementos do vetor:\n");
//   for (int i = 0; i < tamanho; i++) {
//     scanf("%d", &vetor[i]);
//   }

//   int soma = somaVetor(vetor, tamanho);
//   printf("A soma dos elementos do vetor é: %d\n", soma);

//   // Free the allocated memory
//   free(vetor);

//   return 0;
// }