#include <stdio.h>

int main(){

  float aloha[10], coisas[10][5], *pf, value = 2.2;
  int i = 3;

}

/*
aloha[2] = value; => atribui o valor de value ao elemento 2 do vetor aloha, isso está correto.

scanf("%f", &aloha); => está incorreto, pois aloha é um vetor de float, e o scanf espera um ponteiro para float.
O correto seria scanf("%f", &aloha[i]); para ler um valor e armazená-lo no elemento i do vetor aloha.

aloha = "value"; => está incorreto, pois aloha é um vetor de float, e não pode ser atribuído a uma string literal.

printf("%f", aloha); => está incorreto, pois aloha é um vetor de float, e o printf espera um ponteiro para float.
O correto seria printf("%f", aloha[i]); para imprimir o valor do elemento i do vetor aloha.

coisas[4][4] = aloha[3]; => está correto, pois atribui o valor do elemento 3 do vetor aloha ao elemento [4][4] da matriz coisas.

coisas[5] = aloha; => está incorreto, pois coisas[5] é um vetor de float, e aloha é um vetor de float.

pf = value; => está incorreto, pois pf é um ponteiro para float, e value é um float.
O correto seria pf = &value; para atribuir o endereço de value a pf.

pf = aloha; => está correto, pois pf é um ponteiro para float, e aloha é um vetor de float.
*/
