#include <stdio.h>

int main(void) {
    int i = 5, *p;

    p = &i;

    printf("%p\n %p\n %d\n %d\n %d\n %d\n",
           p, p+1, *p+2, **&p, 3**p, **&p+4);
}

// p: p armazena o endereço de i, pois foi atribuído p = &i. Portanto, %p imprime o endereço de i.
// p+1: aponta para a posição seguinte de um objeto do tipo int, avançando sizeof(int) bytes, ou seja, p + 1 = endereço de i + 4 bytes.
// *p+2: Como p aponta para i e i possui valor 5, *p vale 5. Portanto, *p + 2 = 5 + 2 = 7.
// **&p: &p representa o endereço de p. Ao aplicar * sobre esse endereço, recuperamos p, portanto *&p = p. Assim, **&p = *p. Como p aponta para i e i = 5, o resultado é 5.
// 3**p: A expressão 3**p é interpretada como 3 * (*p). Como p aponta para i e i = 5, temos *p = 5. Portanto, 3 × 5 = 15.
// **&p+4: Como **&p é equivalente a *p e *p = 5, temos **&p + 4 = 5 + 4 = 9.

 /*         MEMÓRIA

       ┌───────────────┐
       │               │
       │    p          │
       │  (endereço    │
       │     de i)     │
       │               │
       ├───────────────┤
       │               │
       │    i = 5      │
       │               │
       ├───────────────┤
       │               │
       │ próxima       │
       │ posição int   │  ← p + 1
       │               │
       └───────────────┘
       */