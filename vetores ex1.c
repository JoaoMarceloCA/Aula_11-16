#include <stdio.h>

int main() {
    
    double vetor[5];

    vetor[0] = 10;
    vetor[1] = 11;

    printf("%.1f\n", vetor[0]);
    printf("%.1f\n", vetor[1]);

    int numint [5];
    numint[0] = '1';
    numint[1] = '2';

    printf("%c\n", numint[0]);
    printf("%c\n", numint[1]);

    return 0;
}