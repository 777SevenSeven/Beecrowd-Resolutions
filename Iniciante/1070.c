#include <stdio.h>

int main() {
    int X = 0, parOuImpar = 0;
    scanf("%d", &X);
    parOuImpar = X % 2;
    
    if (parOuImpar == 0) { 
        X++; 
    }

    for (int i = 0; i < 6; i++) { 
        printf("%d\n", X);
        X += 2;
    }

    return 0;
}