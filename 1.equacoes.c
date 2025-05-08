#include <stdio.h>

float funcao1(float a, float b, float c) {
    float R = 0;
    R = ((2 + a) / (b + 3) / (2 * c));
    return R;
}

float funcao2(float a, float b, float c) {
    float R = 0;
    R = ((2 * b) / (a * 3) / (2 * c));
    return R;
}

float funcao3(float a, float b) {
    float R = 0;
    R = ((a * 2 - a * 1) * (a * 2 - a * 1) + (b * 2 - b * 1));
    return R;
}

void lerdados(float *a, float *b, float *c) {
    printf("\nValor de A = ");
    scanf("%f", a);
    printf("\nValor de B = ");
    scanf("%f", b);
    printf("\nValor de C = ");
    scanf("%f", c);
}

int main() {
    float a, b, c;
    lerdados(&a, &b, &c);
    printf("\nValor Funcao 01: %0.1f", funcao1(a, b, c));
    printf("\nValor Funcao 02: %0.1f", funcao2(a, b, c));
    printf("\nValor Funcao 03: %0.1f", funcao3(a, b));
    return 0;
}
