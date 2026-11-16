#include <stdio.h>
int main() {
double A = 0, B = 0, C = 0,areaTR = 0,areaC = 0, areaT = 0;
double areaQ = 0, areaR = 0, pi = 3.14159;
  scanf("%lf %lf %lf",&A,&B,&C);
  areaTR = (A * C) / 2;
  areaC = pi * pow(C,2);
  areaT = (A+B) * C / 2;
  areaQ = pow(B,2);
  areaR = A * B;
    printf("TRIANGULO: %0.3lf\nCIRCULO: %0.3lf\nTRAPEZIO: %0.3lf\nQUADRADO: %0.3lf\nRETANGULO: %0.3lf\n", areaTR,areaC,areaT,areaQ,areaR);
    return 0;
}