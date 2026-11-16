#include <stdio.h>
int main() {
    
 int distancia = 0;
 float gasolina = 0, resultado = 0;
  
  scanf(" %d %f ", &distancia, &gasolina);
  
  resultado = distancia / gasolina;
  
  printf("%0.3f km/l\n", resultado);
    return 0;
}