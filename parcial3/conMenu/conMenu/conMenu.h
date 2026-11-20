#pragma once

#include <Windows.h>

void clrscr() {  // Función para limpiar la pantalla para desplegar un nuevo Monito
    system("@cls||clear");
}

char sangria[100] = "              ";  // Variable para sangria de los menús

void elMenu() {
    clrscr();
    printf("\n\n\n");
    printf("%s***************************\n", sangria);
    printf("%s*                         *\n", sangria);
    printf("%s*      1. Suma            *\n", sangria);
    printf("%s*      2. Resta           *\n", sangria);
    printf("%s*      3. Multiplicacion  *\n", sangria);
    printf("%s*      4. Division Real   *\n", sangria);
    printf("%s*      5. Division Entera *\n", sangria);
    printf("%s*      6. Residuo         *\n", sangria);
    printf("%s*      0. Finaliza        *\n", sangria);
    printf("%s*                         *\n", sangria);
    printf("%s***************************\n", sangria);
}
