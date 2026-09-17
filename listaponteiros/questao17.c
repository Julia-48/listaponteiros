#include <stdio.h>
#include <stdlib.h>

/*Com memory leak*/
int main() {
    int *ptr = (int *)malloc(10 * sizeof(int));

    if (ptr == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        ptr[i] = i * 2;
    }

    printf("Valores: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // memory leak: memoria alocada nao e liberada
    return 0;
}

/*Corrigido*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(10 * sizeof(int));

    if (ptr == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        ptr[i] = i * 2;
    }

    printf("Valores: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);  // libera a memoria alocada

    return 0;
}

/*
O que é um memory leak?
Um memory leak ocorre quando um programa aloca memória dinamicamente (por exemplo, usando malloc em C)
e não libera essa memória quando ela não é mais necessária. Isso pode levar a um consumo crescente de memória,
o que pode eventualmente esgotar os recursos do sistema e causar falhas no programa ou no sistema operacional.
Como evitar memory leaks?
1. Sempre liberar a memória alocada dinamicamente usando free() quando ela não for mais necessária.
2. Usar ferramentas de análise de memória, como Valgrind, para detectar memory leaks durante o desenvolvimento.
3. Evitar alocações desnecessárias e reutilizar memória quando possível.
4. Manter um controle rigoroso sobre a alocação e liberação de memória, especialmente em programas complexos com muitas funções e estruturas de dados.
5. Considerar o uso de smart pointers ou bibliotecas de gerenciamento de memória em linguagens que suportam esses recursos, como C++.
*/