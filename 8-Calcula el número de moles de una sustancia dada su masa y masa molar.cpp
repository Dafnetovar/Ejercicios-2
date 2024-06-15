#include <stdio.h>

int main() {
    float masa, masa_molar, moles;
    printf("Introduce la masa de la sustancia (en gramos): ");
    scanf("%f", &masa);
    printf("Introduce la masa molar (en g/mol): ");
    scanf("%f", &masa_molar);
    moles = masa / masa_molar;
    printf("El número de moles es: %.2f mol\n", moles);
    return 0;
}