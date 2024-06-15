#include <stdio.h>

int main() {
    float fuerza, distancia, trabajo;
    printf("Introduce la fuerza aplicada (en newtons): ");
    scanf("%f", &fuerza);
    printf("Introduce la distancia recorrida (en metros): ");
    scanf("%f", &distancia);
    trabajo = fuerza * distancia;
    printf("El trabajo realizado es: %.2f J\n", trabajo);
    return 0;
}