#include <stdio.h>

void funcao(char **p){
  char *t;

  t = (p += sizeof(int))[-1];

  printf("%s\n", t);
}

int main(){

  char *a[] = { "ab", "cd", "ef", "gh", "ij", "kl"};

  funcao(a);

  return 0;
}

/*Como sizeof(int) = 4, a expressão p += sizeof(int) faz o ponteiro p avançar 4 posições no vetor de ponteiros.
Como inicialmente p aponta para a[0], após o incremento ele passa a apontar para a[4].
Em seguida, o índice [-1] faz o acesso à posição anterior, a[3].
Como a[3] contém a string "gh", o ponteiro t passa a apontar para "gh".
Portanto, printf("%s\n", t) imprime gh.*/
