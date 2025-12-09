#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
  float juros;
  int anos;
  float brlfinal;
  float brl;
  printf("Insira a taxa de juros:\n");
  scanf("%f",&juros);
  printf("Insira a quantiade de anos a ser simulados:\n");
  scanf("%d",&anos);
  printf("Insira o valor inical do investimento:\n");
  scanf("%f", &brl);
  printf("Juros: %.2f\n",juros / 100);
  brlfinal = brl * (1 + (juros * anos));

  printf("Valor final: %f\n",brlfinal);



  int matriz[2][2] = { {1,2},{3,4} };
  int vetor[3] = {5,6,7};
  int novoValordovetor;
  int elemento;
  for (int i = 0; i < 3; i++) {
    printf("Valor Do vetor: %d\n", vetor[i]);
    printf("Valor De memoria do vetor: %p\n", &vetor[i]);
  }
  
  printf("Por Favor digite um novo valor para o vetor: \n");
  scanf("%d",&novoValordovetor);
  printf("Agora digite qual elemento você quer modificar (de 1 a 3): \n");
  scanf("%d",&elemento);

  *(vetor + elemento) = novoValordovetor;

  for(int i = 0; i < 3; i++) {
    printf("Valor Do vetor: %d\n", *(vetor + i));
    printf("Valor De memoria do vetor: %p\n", &vetor[i]);
  }
  for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 2; j++) {
    printf("Valores da matriz: %d\n", matriz[i][j]);
    printf("Valores de memoria da matriz: %p\n", &matriz[i][j]);
  }
  }
}





