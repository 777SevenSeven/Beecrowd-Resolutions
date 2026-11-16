#include <stdio.h>
#include <string.h>

int ganha(char x[], char y[]) {
    return (strcmp(x, "pedra") == 0 && strcmp(y, "tesoura") == 0) ||
    (strcmp(x, "tesoura") == 0 && strcmp(y, "papel") == 0) ||
    (strcmp(x, "papel") == 0 && strcmp(y, "pedra") == 0);
}

int main() {
char A[10], B[10], C[10];

while (scanf("%s %s %s", A, B, C) != EOF) {

        if (ganha(A, B) && ganha(A, C)) {
            printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
        }
        else if (ganha(B, A) && ganha(B, C)) {
            printf("Iron Maiden's gonna get you, no matter how far!\n");
        }
        else if (ganha(C, A) && ganha(C, B)) {
            printf("Urano perdeu algo muito precioso...\n");
        }
        else {
            printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
        }
    }

    return 0;
}