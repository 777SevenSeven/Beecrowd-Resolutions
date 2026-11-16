#include <stdio.h>

int main()
{
    //Variáveis
    int tomada1, tomada2, tomada3, tomada4 = 0, maximo = 0;
    
    //Entrada de Dados
    scanf("%d %d %d %d", &tomada1, &tomada2, &tomada3, &tomada4);
    
    //Desenvolvimento de Dados
    maximo = (tomada1 + tomada2 + tomada3 + tomada4) - 3;
    
    //Saída de Dados
    printf("%d\n", maximo);

    return 0;
}
