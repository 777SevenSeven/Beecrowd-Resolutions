
#include <stdio.h>

int main()
{
    int numero = 0, par = 0, cont = 1;
    for(cont = 1; cont <= 5; cont++)
    {
        scanf("%d", &numero);
        if(numero % 2 == 0)
        {
            par+= 1;
        }
    }
    
    printf("%d valores pares\n", par);

    return 0;
}
