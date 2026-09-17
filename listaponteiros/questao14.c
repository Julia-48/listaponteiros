#include <stdio.h>

int f(int a, int *pb, int **ppc) {
  int b, c;
  **ppc += 1;
  c = **ppc;
  *pb += 2;
  b = *pb;
  a += 3;
  return a + b + c;
}

void main() {
  int c, *b, **a;
  c = 5;
  b = &c;
  a = &b;
  printf("%d\n", f(c, b, a));
  getchar();
}

/*
A saída é 22 porque:
- Inicialmente, c = 5.
- A função f é chamada com a = 5, pb apontando para c e ppc apontando para b.
- Dentro da função f:
    - **ppc += 1; incrementa o valor de c em 1, então c = 6.
    - c = **ppc; agora c = 6.
    - *pb += 2; incrementa o valor de c em 2, então c = 8.
    - b = *pb; agora b = 8.
    - a += 3; incrementa a em 3, então a = 8
    - A função retorna a + b + c = 8 + 8 + 6 = 22.
*/
