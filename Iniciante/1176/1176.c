#include <stdio.h>
int main() {
  long long int j=0, i,inicial,calculo,soma[61],fib,N;
  soma[0]=0;
  soma[1]=1;
  for (i=2;i<=60;i++){
  calculo=soma[i-1]+soma[i-2];
  soma[i]=calculo;
  }
      scanf("%lld",&fib);
  for(j=1;j<=fib;j++){
    scanf("%lld",&N);
    printf("Fib(%lld) = %lld\n",N,soma[N]);}
  return 0;
}