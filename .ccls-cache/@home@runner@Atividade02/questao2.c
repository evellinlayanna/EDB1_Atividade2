// // Faca em C uma funcao recursiva que permita somar os elementos de um
// // vetor de inteiros.

// #include <stdio.h>

// // Funcao recursiva que soma os elementos de um vetor de inteiros
// int somaVetor(int vetor[], int tamanho) {
//   if (tamanho == 0) {
//     return 0;
//   } else {
//     // Chamada recursiva que soma o elemento atual com a soma dos elementos
//     // anteriores
//     return vetor[0] + somaVetor(vetor + 1, tamanho - 1);
//   }
// }

// int main() {
//   int vetor[] = {1, 2, 4, 8, 0};
//   // O tamanho do vetor é o número de elementos que ele contém
//   int tamanho = sizeof(vetor) / sizeof(vetor[0]);
//   int soma = somaVetor(vetor, tamanho);

//   printf("A soma dos elementos do vetor é: %d", soma);

//   return 0;
// }