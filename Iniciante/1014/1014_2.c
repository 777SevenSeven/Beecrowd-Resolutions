#include <stdio.h>
 
int main() {
   int distanciatotal = 0;
   float totalcombustivelgasto = 0, consumomedio = 0;
   scanf("%d %f", &distanciatotal, &totalcombustivelgasto);
   
   consumomedio = (distanciatotal / totalcombustivelgasto);
   
   printf("%0.3f km/l\n", consumomedio);
    return 0;
}