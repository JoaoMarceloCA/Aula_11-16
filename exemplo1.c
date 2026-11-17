#include <stdio.h>

double calcularMedia(double a, double b) {
    double soma = a + b;
    return soma / 2.0;
}

int main() {

    float a1 = 30;
    float b1 = 10;
    float area1 = a1*b1;
    float peri1 = (a1+b1)*2;

    printf("Area de um retangulo 1: %.2f\n", area1);
    printf("Perimetro de um retangulo 1: %.2f\n", peri1);

    float a = 25;
    float b = 10;
    float area = a*b;
    float peri = (a+b)*2;

    printf("Area de um retangulo 2: %.2f\n", area);
    printf("Perimetro de um retangulo 2: %.2f\n", peri);

    return 0;
}