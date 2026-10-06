/*****************************************
 * Universidad Politécnica de Tulancingo *
 * Ingeniería en sistemas electrónicos   *
 * Programación estructurada             *
 * Autor:    *
 * ------------------------------------- *
 * Programa: conPrimos.cpp               *
 * Al leer un entero mayor que cero, el  *
 * programa determina si es primo o no.  *
 * ************************************* */
#include <stdio.h>

int main(){
    int valor;
	int contador = 0;
	printf("Captura el entero que se desea verificar si es primo: ");
	scanf_s("%d", &valor);
	contador = valor - 1;
	while (contador > 1) {
		if (valor % contador == 0) {
			printf("El numero %d no es primo\n", valor);
			break;
		}
		contador--;
	}
	if (contador == 1) {
		printf("El numero %d es primo\n", valor);
	}
}
