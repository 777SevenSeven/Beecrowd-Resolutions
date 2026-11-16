#include <stdio.h>

int main () {
    int horas = 0, minutos = 0, segundos = 0;
    
    //Entrada de Dados
    scanf("%d", &segundos);
    
    //Processamento de Dados
    minutos = segundos / 60;
    segundos%= 60;
    horas = minutos / 60;
    minutos %= 60;
    
    //Saída de Dados
    printf("%d:%d:%d\n", horas, minutos, segundos);
return 0;
}