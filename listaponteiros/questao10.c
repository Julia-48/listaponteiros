#include <stdio.h>
int main(){
  int vet[] = {4, 9, 13};
  int i;

  for(i=0;i<3;i++){
  printf("%d\n ", *(vet+i));
  }

  return 0;
}

/*
Explicação do 1° código: O programa declara um vetor de inteiros chamado "vet" com três elementos: 4, 9 e 13.
Em seguida, ele utiliza um loop "for" para percorrer os índices de 0 a 2 (totalizando 3 elementos).
Dentro do loop, a expressão *(vet+i) é usada para acessar o valor do elemento do vetor na posição i.
O operador * é usado para desreferenciar o ponteiro resultante da expressão vet+i,
que aponta para o endereço do elemento correspondente no vetor.
Portanto, o programa imprime os valores 4, 9 e 13, cada um em uma nova linha.
*/

/*
#include <stdio.h>
int main(){
  int vet[] = {4, 9, 13};
  int i;
  for(i=0;i<3;i++){
  printf("%X\n ",vet+i);
  }
  return 0;
}

Explicação do 2° código: O programa declara um vetor de inteiros chamado "vet" com três elementos: 4, 9 e 13.
Em seguida, ele utiliza um loop "for" para percorrer os índices de 0 a 2 (totalizando 3 elementos).
Dentro do loop, a expressão vet+i é usada para calcular o endereço do elemento do vetor na posição i.
O operador + é usado para deslocar o ponteiro vet para o endereço do elemento correspondente no vetor.
O programa imprime os endereços de memória dos elementos do vetor.
Portanto, o programa imprime os endereços de memória dos elementos 4, 9 e 13, cada um em uma linha.
*/
