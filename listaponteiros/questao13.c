#include <stdio.h>

void mostrar(const char *tipo, int tamanho) {
	printf("%s: ", tipo);
	for (int i = 0; i < 4; i++)
		printf("%d ", 4092 + i * tamanho);
	printf("\n");
}

int main(void) {
	mostrar("char", 1);
	mostrar("int", 2);
	mostrar("float", 4);
	mostrar("double", 8);
	return 0;
}

/*
Quais serão os valores de x+1, x+2 e x+3 se:
◦ x for declarado como char?
x+1 = 4093, x+2 = 4094, x+3 = 4095

◦ x for declarado como int?
x+1 = 4094, x+2 = 4096, x+3 = 4098

◦ x for declarado como float?
x+1 = 4096, x+2 = 4100, x+3 = 4104

◦ x for declarado como double?
x+1 = 4104, x+2 = 4112, x+3 = 4120
*/