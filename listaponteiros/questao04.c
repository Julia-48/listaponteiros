#include <stdio.h>
int main() {
  int valor;
  int *p1;

  float temp;
  float *p2;

  char aux;
  char *nome = "Ponteiros";
  char *p3;

  int idade;
  int vetor[3];

  int *p4;
  int *p5;

  /* (a): Inicialmente, valor recebe 10. Em seguida, p1 recebe o endereço de valor. Como p1 aponta para valor, a instrução *p1 = 20 altera o conteúdo de valor para 20. Portanto, o programa imprime 20.*/
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor);

  /* (b): p2 recebe o endereço de temp, portanto *p2 representa o conteúdo de temp. A atribuição *p2 = 29.0 altera temp para 29.0. Como %f é utilizado para imprimir o valor de temp, o resultado é 29.000000.*/
  temp = 26.5;
  p2 = &temp;
  *p2= 29.0;
  printf("%.1f \n", temp);

  /* (c): p3 recebe o endereço do primeiro caractere de nome, ou seja, nome[0]. Como nome[0] contém o caractere 'P', *p3 também vale 'P'. Esse caractere é armazenado em aux e impresso com %c.*/
  p3 = &nome[0];
  aux = *p3;
  printf("%c \n", aux);

  /* (d): A posição nome[4] corresponde ao caractere 'e' da palavra "Ponteiros". p3 recebe o endereço dessa posição e, portanto, *p3 acessa o caractere 'e'. Assim, aux recebe 'e' e esse é o caractere impresso.*/
  p3 = &nome[4];
  aux = *p3;
  printf("%c \n", aux);

  /* (e): Em C, o nome de um vetor de caracteres, quando utilizado dessa forma, representa o endereço do seu primeiro elemento. Portanto, p3 = nome faz p3 apontar para nome[0], que contém 'P'. Assim, *p3 vale 'P'.*/
  p3 = nome;
  printf("%c \n", *p3);

  /* (f): Como p3 é um ponteiro para char, ao somar 4 a p3, ele avança quatro posições na string. Partindo de nome[0], ele passa a apontar para nome[4], que contém 'e'. Portanto, o programa imprime e.*/
  p3 = p3 + 4;
  printf("%c \n", *p3);

  /* (g): No item anterior, p3 apontava para nome[4], que contém 'e'. Ao utilizar p3--, o ponteiro volta uma posição e passa a apontar para nome[3], que contém 't'. Portanto, *p3 vale 't'.*/
  p3--;
  printf("%c \n", *p3);

  /* (h): O vetor recebe os valores 31, 45 e 27. Ao fazer p4 = vetor, p4 passa a apontar para o primeiro elemento do vetor, vetor[0]. Como vetor[0] vale 31, *p4 vale 31. Portanto, idade recebe 31 e esse valor é impresso.*/
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("%d \n", idade);

  /* (i): p4 aponta para vetor[0]. Ao fazer p5 = p4 + 1, p5 passa a apontar para a posição seguinte, vetor[1]. Como vetor[1] contém 45, *p5 vale 45 e esse valor é armazenado em idade.*/
  p5 = p4 + 1;
  idade = *p5;
  printf("%d \n", idade);

  /* (j): No início do trecho, p5 aponta para vetor[1]. Ao fazer p4 = p5 + 1, o ponteiro p4 avança uma posição e passa a apontar para vetor[2]. Como vetor[2] possui o valor 27, *p4 vale 27. Portanto, idade recebe 27 e o programa imprime 27.*/
  p4 = p5+ 1;
  idade = *p4;
  printf("%d \n", idade);

  /* (l): No final do item (j), p4 aponta para vetor[2]. Ao fazer p4 = p4 - 2, o ponteiro volta duas posições e passa a apontar para vetor[0]. Como vetor[0] possui o valor 31, *p4 vale 31. Portanto, o programa imprime 31.*/
  p4 = p4 - 2;
  idade = *p4;
  printf("%d \n", idade);

  /* (m): &vetor[2] representa o endereço de vetor[2]. Ao subtrair 1, o ponteiro volta uma posição e passa a representar o endereço de vetor[1]. Como vetor[1] contém 45, *p5 vale 45. Portanto, o programa imprime 45.*/
  p5 = &vetor[2] - 1;
  printf("%d \n", *p5);

  /* (n): No item (m), p5 aponta para vetor[1]. O operador ++ faz o ponteiro avançar uma posição, fazendo p5 apontar para vetor[2]. Como vetor[2] possui o valor 27, *p5 vale 27. Portanto, o programa imprime 27.*/
  p5++;
  printf("%d \n", *p5);
  return(0);
}