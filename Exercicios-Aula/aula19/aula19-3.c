/**
* @file aula19-3.c
* @author Anderson Soares da Silva
* @date 30 Abr 2021
* @brief  exercicio 3 aula 19
*/
#include <stdio.h>
#include <stdio.h>

int main() {
	float matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int i, j;

	for (i=0; i<3; i++) {
		for (j=0; j<3; j++)
			printf("%p\n", &matriz[i][j]); //%p imprime endereços em notação hexadecimal
	}

	putchar('\n');

	return 0;
}
