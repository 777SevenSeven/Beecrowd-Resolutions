#include <stdio.h>
int main() {
	float x = 0, y = 0;
	
	//Entrada de Dados
	scanf("%f %f",&x, &y);

	//Processamento de Dados
	
	//Origem
	if(x == 0.0 && y== 0.0) {
		printf("Origem\n");
	}

    //Q1
	if(x > 0.0 && y > 0.0) {
		printf("Q1\n");
	}

    //Q2
	if(x < 0.0 && y > 0.0) {
		printf("Q2\n");
	}

    //Q3
	if(x < 0.0 && y < 0.0) {
		printf("Q3\n");
	}

    //Q4
	if(x > 0.0 && y < 0.0) {
		printf("Q4\n");
    }
    
    //Eixo X
    if((x > 0.0 || x < 0.0) && y == 0.0) {
        printf("Eixo X\n");
    }
    
    //Eixo Y
    if(x == 0.0 && (y > 0.0 || y < 0.0)) {
        printf("Eixo Y\n");
    }

return 0;
}
