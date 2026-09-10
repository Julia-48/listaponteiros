#include <stdio.h>

int main() {
    // Declaração do vetor pulo com 4 elementos do tipo int
    int pulo[4] = {10, 20, 30, 40};
    
    // Teste das alternativas
    printf("1. *(pulo + 2) -> Valor: %d (Correto! Acessa o 3º elemento)\n", *(pulo + 2));
    printf("2. *(pulo + 3) -> Valor: %d (Acessa o 4º elemento)\n", *(pulo + 3));
    printf("3. pulo + 3   -> Endereço: %p (Ponteiro para o 4º elemento)\n", (void*)(pulo + 3));
    printf("4. pulo + 2   -> Endereço: %p (Ponteiro para o 3º elemento)\n", (void*)(pulo + 2));

    return 0;
}

/*
Resposta: *(pulo + 2)
Explicação: A expressão pulo + 2 desloca o ponteiro para o terceiro elemento do vetor (índice 2),
e o operador * acessa o valor armazenado nesse endereço, que é 30.
*/