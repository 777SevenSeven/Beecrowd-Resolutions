#include <stdio.h>
#include <string.h>

int main() {
    char categoria[20], subcategoria[20], tipo[20];

    scanf("%s", categoria);

    if (strcmp(categoria, "vertebrado") == 0) {
        scanf("%s", subcategoria);
        scanf("%s", tipo);

        if (strcmp(subcategoria, "ave") == 0) {
            if (strcmp(tipo, "carnivoro") == 0) {
                printf("aguia\n");
            } else if (strcmp(tipo, "onivoro") == 0) {
                printf("pomba\n");
            }
        } else if (strcmp(subcategoria, "mamifero") == 0) {
            scanf("%s", tipo);

            if (strcmp(tipo, "onivoro") == 0) {
                printf("homem\n");
            } else if (strcmp(tipo, "herbivoro") == 0) {
                printf("vaca\n");
            }
        }
    } else if (strcmp(categoria, "invertebrado") == 0) {
        scanf("%s", subcategoria);

        if (strcmp(subcategoria, "inseto") == 0) {
            scanf("%s", tipo);

            if (strcmp(tipo, "hematofago") == 0) {
                printf("pulga\n");
            } else if (strcmp(tipo, "herbivoro") == 0) {
                printf("lagarta\n");
            }
        } else if (strcmp(subcategoria, "anelideo") == 0) {
            scanf("%s", tipo);

            if (strcmp(tipo, "hematofago") == 0) {
                printf("sanguessuga\n");
            } else if (strcmp(tipo, "onivoro") == 0) {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
