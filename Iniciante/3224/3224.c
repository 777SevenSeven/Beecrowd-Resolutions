#include <stdio.h>
#include <string.h>

int main() {
    char ahPaciente[1005], ahMedico[1005];

    // Entrada de Dados
    scanf("%s", ahPaciente);
    scanf("%s", ahMedico);

    // Desenvolvimento de Dados
    int lenPaciente = strlen(ahPaciente) - 1; // número de 'a'
    int lenMedico   = strlen(ahMedico) - 1;   // número de 'a'

    if (lenPaciente >= lenMedico) {
        printf("go\n");
    } else {
        printf("no\n");
    }

    return 0;
}
