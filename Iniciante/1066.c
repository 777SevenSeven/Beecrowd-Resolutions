/******************************************************************************

Exemplo de Entrada	
-5
0
-3
-4
12

Exemplo de Saída
3 valor(es) par(es)
2 valor(es) impar(es)
1 valor(es) positivo(s)
3 valor(es) negativo(s)

*******************************************************************************/
#include <stdio.h>

int main()
{
    //variáveis
    int numeros = 0, par = 0, impar = 0, positivo = 0, negativo = 0;
    
    //Desenvolvimento de Dados
    for(int i = 1; i <= 5; i++) {
        scanf("%d", &numeros);
        if((numeros % 2) == 0) {
            par++;
        } else {
            impar++;
        }
        
        if (numeros > 0) {
            positivo++;
        } else if(numeros < 0){
            negativo++;
        }
    }
    
    
    //Saída de Dados
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, positivo, negativo);

    return 0;
}
