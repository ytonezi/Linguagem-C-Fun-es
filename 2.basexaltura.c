#include <stdio.h>
#include <math.h>

float perimetro(float base, float altura) {
    float resp = 0;
    resp = (base + altura) * 2;
    return resp;
}

float area(float base, float altura) {
    float resp = 0;
    resp = (base * altura);
    return resp;
}

float diagonal(float base, float altura) {
    float resp = 0;
    resp = sqrt((base * base) + (altura * altura));
    return resp;
}

void valores(float *base, float *altura) {
    printf("\nValor da Base = ");
    scanf("%f", base);
    printf("\nValor da Altura = ");
    scanf("%f", altura);
}

int main() {
    float base, altura;
    valores(&base, &altura);

    printf("Valor do perimetro: %0.2f\n", perimetro(base, altura));
    printf("Valor da area: %0.2f\n", area(base, altura));
    printf("Valor da Diagonal: %0.2f\n", diagonal(base, altura));

    return 0;
}
