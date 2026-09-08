#include <stdio.h>

int main() {

    int i = 3, j = 5;
    int *p, *q;

    p = &i;
    q = &j;

    printf("i = %d\n", i);
    printf("j = %d\n\n", j);

    //A expressão abaixo é verdadeira porque o ponteiro p recebeu
    //o endereço da variável i através da instrução p = &i.
    //Portanto, p e &i possuem o mesmo endereço.
    printf("p == &i: %d\n\n", p == &i);

    //p aponta para i, cujo valor é 3, portanto *p = 3.
    //q aponta para j, cujo valor é 5, portanto *q = 5.
    //Assim, *p - *q = 3 - 5 = -2, conforme vemos no resultado da expressão abaixo.
    printf("*p - *q: %d\n\n", *p - *q);

    //Primeiro, &p representa o endereço do ponteiro p.
    //Ao aplicar * sobre &p, obtemos novamente p, pois *&p = p.
    //Portanto, **&p é equivalente a *p.
    //Como p aponta para i e i = 3, o resultado é 3.
    printf("**&p: %d\n\n", **&p);

    //Como p aponta para i, *p = 3, e como q aponta para j, *q = 5.
    //Assim, a expressão torna-se 3 - 3/5 + 7.
    //Como 3 e 5 são inteiros, a divisão inteira 3/5 resulta em 0.
    //Portanto, 3 - 0 + 7 = 10.
    printf("3 - *p/(*q) + 7: %d\n", 3 - *p/(*q) + 7);

    return 0;
}