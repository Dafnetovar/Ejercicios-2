#include <stdio.h>

int main() {
    float voltaje, resistencia, corriente;
    printf("Introduce el voltaje (en voltios): ");
    scanf("%f", &voltaje);
    printf("Introduce la resistencia (en ohmios): ");
    scanf("%f", &resistencia);
    corriente = voltaje / resistencia;
    printf("La corriente en el circuito es: %.2f A\n", corriente);
    return 0;
}