#include <stdio.h>

int main() {
    int mat[4] = {10, 20, 30, 40};
    int *p;
    int x;

    // Expressão p = mat + 1: Válida
    p = mat + 1;
    printf("Expressão 1 (p = mat + 1): p aponta para %d\n", *p);

    // Expressões 2 e 3: Inválidas
    
    // p = mat++; // ERRO
    // p = ++mat; // ERRO

    // Expressão x = (*mat): Válida
    x = (*mat);
    printf("Expressão 4 (x = (*mat)): x recebeu o valor %d\n", x);

    return 0;
}

/*
Resposta: As expressões válidas são a 1 e a 4.
Explicação:
A expressão p = mat + 1 é válida porque mat é um ponteiro para o primeiro elemento do vetor,
e podemos somar 1 a ele para apontar para o segundo elemento.
A expressão x = (*mat) também é válida, pois *mat acessa o valor do primeiro elemento do vetor, que é 10.
As expressões p = mat++ e p = ++mat são inválidas porque não podemos incrementar o ponteiro mat diretamente,
já que ele é um ponteiro para o primeiro elemento do vetor e não uma variável que pode ser incrementada.
*/