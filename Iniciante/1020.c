#include <stdio.h>

int main() {
    int dias = 0, meses = 0, anos = 0;
    
    // Entrada de Dados
    scanf("%d", &dias);
    
    // Processamento de Dados
    anos = dias / 365;
    meses = (dias % 365) / 30;
    dias = (dias % 365) % 30;
    
    // Saída de Dados
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);
    
    return 0;
}
