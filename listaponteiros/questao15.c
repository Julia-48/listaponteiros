#include <stdio.h>

int main(){

  unsigned int x[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

  printf("%u, %u, %u", x+3, *(x+3), *(x+2)+3);
}

/*
Como o programa usa %u para imprimir ponteiros, o comportamento é tecnicamente indefinido,
mas em praticamente todos os sistemas o que aparece na tela é algo como:
12345678, 12345678, 12345678
A ideia é: os três valores são o mesmo endereço.
*/
