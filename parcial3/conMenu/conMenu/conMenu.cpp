
#include <stdio.h>
#include "conMenu.h"

void capturaValores(int* a, int* b) {
	printf("%sIngrese el primer valor: ", sangria);
	scanf_s("%d", a);
	printf("%sIngrese el segundo valor: ", sangria);
	scanf_s("%d", b);
}

int Suma(int a, int b);
int Resta(int a, int b);
int Multiplicacion(int a, int b);
float Division(int a, int b);
int DivisionEntera(int a, int b);
int Residuo(int a, int b);

int main(){
	int valor1 = 0, valor2 = 0;
	int opcion = 0;
	do {
		elMenu();
		printf("%sIngrese una opcion: ", sangria);
		scanf_s("%d", &opcion);
		if (opcion >= 1 && opcion <= 6) {
			capturaValores(&valor1, &valor2);
			switch (opcion) {
				case 1:
					printf("%sEl resultado de la suma es: %d\n", sangria, Suma(valor1, valor2));
					break;
				case 2:
					printf("%sEl resultado de la resta es: %d\n", sangria, Resta(valor1, valor2));
					break;
				case 3:
					printf("%sEl resultado de la multiplicacion es: %d\n", sangria, Multiplicacion(valor1, valor2));
					break;
				case 4:
					printf("%sEl resultado de la division real es: %.2f\n", sangria, Division(valor1, valor2));
					break;
				case 5:
					printf("%sEl resultado de la division entera es: %d\n", sangria, DivisionEntera(valor1, valor2));
					break;
				case 6:
					printf("%sEl residuo de la division entera es: %d\n", sangria, valor1 % valor2);
					break;
			}
			printf("\n%sPresione cualquier tecla para continuar...\n", sangria); getchar(); getchar();
		}
	} while (opcion != 0);
	clrscr();
	return 0;
}

int Suma(int a, int b) {
	return a + b;
}

int Resta(int a, int b) {
	return a - b;
}

int Multiplicacion(int a, int b) {
	return a * b;
}

float Division(int a, int b) {
	if (b == 0) {
		printf("%sError: Division por cero no permitida.\n", sangria);
		return 0.0f; // Retorna 0.0 en caso de división por cero
	}
	return (float)a / (float)b;
}

int DivisionEntera(int a, int b) {
	if (b == 0) {
		printf("%sError: Division por cero no permitida.\n", sangria);
		return 0; // Retorna 0 en caso de división por cero
	}
	return a / b;
}

int Residuo(int a, int b) {
	if (b == 0) {
		printf("%sError: Division por cero no permitida.\n", sangria);
		return 0; // Retorna 0 en caso de división por cero
	}
	return a % b;
}


