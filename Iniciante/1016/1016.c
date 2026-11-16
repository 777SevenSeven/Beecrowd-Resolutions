#include <stdio.h>
#include <math.h>
int main() {
 
 int X = 0, Y = 0, distancia = 0, resultado
 = 0;
   scanf("%d %d", &X, &Y);
   
   distancia = fabs(X - Y);
   resultado = distancia * 2;
   
   printf("%d minutos\n", resultado);
   return 0;}