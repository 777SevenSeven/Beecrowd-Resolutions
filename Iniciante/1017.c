#include <stdio.h>
int main() {
 
   int horas, velocidade, gasolina;
     scanf("%d %d",&horas,&velocidade);
     
     gasolina=horas*velocidade;
     float resultado=gasolina/12.0;
     printf("%0.3f\n",resultado);
    
    return 0;
}