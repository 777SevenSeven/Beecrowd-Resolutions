#include <stdio.h>
int main() {
 int numero=0,hora=0;
 float valor=0;
   scanf("%d %d %f", &numero, &hora, &valor);
     float salario = valor*hora;
       printf("NUMBER = %d\nSALARY = U$ %0.2f\n", numero, salario);
    return 0;
   
}