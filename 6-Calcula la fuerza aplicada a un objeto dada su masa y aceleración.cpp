#include <stdio.h>

int main() {
    float masa, aceleracion, fuerza;
    printf("Introduce la masa del objeto (en kilogramos): ");
    scanf("%f", &masa);
    printf("Introduce la aceleración (en m/s^2): ");
    scanf("%f", &aceleracion);
    fuerza = masa * aceleracion;
    printf("La fuerza aplicada es: %.2f N\n", fuerza);
    return 0;
}