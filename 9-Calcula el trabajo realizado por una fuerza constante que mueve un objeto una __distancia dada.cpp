#include <stdio.h>

int main() {
    float cantidad_soluto, volumen_solucion, concentracion_molar;
    printf("Introduce la cantidad de soluto (en moles): ");
    scanf("%f", &cantidad_soluto);
    printf("Introduce el volumen de la solución (en litros): ");
    scanf("%f", &volumen_solucion);
    concentracion_molar = cantidad_soluto / volumen_solucion;
    printf("La concentración molar es: %.2f M\n", concentracion_molar);
    return 0;
}