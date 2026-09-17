#include <stdio.h>

struct teste {
  // Em C, os campos da struct nao recebem valores na sua declaracao.
  int x;

  // O tamanho fixo permite armazenar "jose" e o caractere terminador '\0'.
  char nome[20];
};

int main(void) {
  // Os valores sao inicializados quando uma variavel da struct e criada.
  struct teste usuario = {3, "jose"};

  // O ponteiro precisa apontar para uma struct valida antes de usar ->.
  struct teste *s = &usuario;

  printf("%d\n", s->x);
  printf("%s\n", s->nome);

  return 0;
}