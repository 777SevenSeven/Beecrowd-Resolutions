#include <math.h>
#include <stdio.h>

int main() {
    int num = 0, casosTestes = 0, cont = 1, primo = 1, raiz = 0, i = 2;

    scanf("%d", &casosTestes);

    for (cont = 1; cont <= casosTestes; cont++) {
        scanf("%d", &num);
        raiz = sqrt(num);

        primo = 1;

        for (i = 2; i <= raiz; i++) {
            if (num % i == 0) {
                primo = 0; 
                break;     
            }
        }

        if (primo == 1 && num > 1) {
            printf("%d eh primo\n", num);
        } else {
            printf("%d nao eh primo\n", num);
        }
    }

    return 0;
}