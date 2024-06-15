#include <stdio.h>

int main() {
    float distancia, tiempo, velocidad_media;
    printf("Introduce la distancia recorrida (en metros): ");
    scanf("%f", &distancia);
    printf("Introduce el tiempo empleado (en segundos): ");
    scanf("%f", &tiempo);
    velocidad_media = distancia / tiempo;
    printf("La velocidad media es: %.2f m/s\n", velocidad_media);
    return 0;
}