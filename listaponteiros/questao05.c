#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void funcao(char** str){
 // str++; Corrigindo:
  (*str)++;
}

int main(){
  char *str = (void *)malloc(50*sizeof(char));

  strcpy(str, "Agostinho");
  funcao(&str);
  puts(str);
  free(str);

  return 0;
}

/*O programa não imprime "gostinho" porque, dentro da função funcao, a instrução str++ incrementa apenas a cópia local do ponteiro str, que é do tipo char**.
Portanto, o ponteiro str original declarado em main não é alterado. Após o retorno da função, str continua apontando para o primeiro caractere da string, 'A'.
Assim, puts(str) imprime "Agostinho".
Para obter "gostinho", seria necessário alterar o ponteiro original utilizando (*str)++ dentro da função.*/