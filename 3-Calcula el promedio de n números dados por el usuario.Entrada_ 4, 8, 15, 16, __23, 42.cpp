#include <stdio.h>

int main() {
    int n, i;
    float num, suma = 0.0, promedio;
    printf("Introduce la cantidad de números: ");
    scanf("%d", &n);
    printf("Introduce los números:\n");
    
    for(i = 0; i < n; ++i) {
        scanf("%f", &num);
        suma += num;
    }
    promedio = suma / n;
    printf("El promedio es: %.2f\n", promedio);
    return 0;
}