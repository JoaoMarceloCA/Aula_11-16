#include <stdio.h>

double calcularArea(double a, double b) {
    double area = a*b;
    return area;
}

double calcularperi(double a, double b) {
    double soma = a+b;
    return soma*2;
}

int main() {

    double arear1 = calcularArea(10, 30);
    double perir1 = calcularperi(10, 30);
    double arear2 = calcularArea(10, 25);
    double perir2 = calcularperi(10, 25);
    

    printf("Area do R1: %.2f, e o perimetro é: %.2f\n", arear1, perir1);
    printf("Area do R2: %.2f, e o perimetro é: %.2f\n", arear2, perir2);

    return 0;
}