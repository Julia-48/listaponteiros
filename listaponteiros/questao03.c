#include <stdio.h>

int main(void)
{
    int i = 10, j = 20;
    int *p, *q;

    // 1) p = &i;
    p = &i;

    // 2) *q = &j;       // ERRO
    // 3) p = &*&i;      // VÁLIDO

    p = &*&i;

    // 4) i = (*&)j;     // ERRO DE SINTAXE

    // 5) i = *&j;
    i = *&j;

    // 6) i = *&*&j;
    i = *&*&j;

    // 7) q = *p;        // ERRO

    // Para testar a 8ª, primeiro fazemos q apontar para j:
    q = &j;

    // 8) i = (*p)++ + *q;
    i = (*p)++ + *q;

    printf("i = %d\n", i);
    printf("j = %d\n", j);
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);

    return 0;
}

/*
p = &i: p é um ponteiro para int e &i representa o endereço de uma variável int. Portanto, a atribuição é válida.
*q = &j: *q representa um valor do tipo int, enquanto &j representa um endereço do tipo int*. Portanto, não é possível atribuir &j a *q.
p = &*&i: *&i é equivalente a i. Portanto, &*&i é equivalente a &i. Como p e &i são do tipo int*, a atribuição é válida.
i = (*&)j: A expressão (*&)j possui uma sintaxe inválida, pois o operador & não possui um operando ao qual possa ser aplicado dentro dos parênteses. Portanto, o programa não compila.
i = *&j: &j obtém o endereço de j e * acessa o valor armazenado nesse endereço. Assim, *&j equivale a j. Como i e j são inteiros, a atribuição é válida.
i = *&*&j: Os pares *& se anulam. Assim, *&*&j é equivalente a j. Como i e j são do tipo int, a atribuição é válida.
q = *p: q é um ponteiro para int (int*), enquanto *p é um valor do tipo int. Portanto, não é possível atribuir *p diretamente a q.
i = (*p)++ + *q: p e q são ponteiros para int, portanto *p e *q são valores do tipo int. O operador ++ pode ser aplicado a *p, e a soma de dois valores inteiros resulta em um int, que pode ser atribuído a i.
*/