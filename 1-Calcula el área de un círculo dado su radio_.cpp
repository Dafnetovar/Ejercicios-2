#include <stdio.h>
#define PI 3.14159265358979323846

int main() {
    float radio, area;
    printf("Introduce el radio del círculo: ");
    scanf("%f", &radio);
    area = PI * radio * radio;
    printf("El área del círculo es: %.2f\n", area);
    return 0;
}