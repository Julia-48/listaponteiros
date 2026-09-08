#include <stdio.h>

int main(void){

  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;

  f = vet;

  printf("contador/valor/valor/endereco/endereco\n");

  for(i = 0 ; i <= 4 ; i++){
    printf("i = %d",i);
    printf(" vet[%d] = %.1f",i, vet[i]);
    printf(" *(f + %d) = %.1f",i, *(f+i));
    printf(" &vet[%d] = %X",i, &vet[i]);
    printf(" (f + %d) = %X",i, f+i);
    printf("\n");
  }
}

/*
printf("i = %d",i); --> A variável i é um inteiro e o laço for inicia em 0 e continua enquanto i <= 4, incrementando i de um em um. Portanto, os valores impressos são de 0 a 4.
printf(" vet[%d] = %.1f",i, vet[i]); --> vet[i] acessa diretamente o elemento do vetor que possui índice i. Como o vetor foi inicializado com 1.1, 2.2, 3.3, 4.4 e 5.5, os valores correspondentes às posições 0 a 4 são esses.
printf(" *(f + %d) = %.1f",i, *(f+i)); --> Como f = vet, o ponteiro f aponta para o primeiro elemento do vetor. A expressão f+i desloca o ponteiro i posições e *(f+i) acessa o valor encontrado nessa posição. Portanto, *(f+i) produz os mesmos valores de vet[i].
printf(" &vet[%d] = %X",i, &vet[i]); --> O operador & retorna o endereço de memória do elemento indicado. Portanto, &vet[i] mostra o endereço de memória correspondente à posição i do vetor.
printf(" (f + %d) = %X",i, f+i); --> Como f aponta para vet[0], a expressão f+i representa o endereço da posição i do vetor. Portanto, f+i deve corresponder ao mesmo endereço obtido por &vet[i].
*/
