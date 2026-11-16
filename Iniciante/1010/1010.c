#include <stdio.h>
int main() {
    int codigo1=0,quantidade1=0,codigo2=0,quantidade2=0;
    double valor1=0,valor2=0,valorT=0;
    scanf("%d %d %lf %d %d %lf", &codigo1,&quantidade1,&valor1,&codigo2,&quantidade2,&valor2);
    valorT=(quantidade1*valor1)+(quantidade2*valor2);
      printf("VALOR A PAGAR: R$ %0.2lf\n", valorT);
    return 0;
}