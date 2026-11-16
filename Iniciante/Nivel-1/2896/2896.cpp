/*
 * Beecrowd | 2896 - Aproveite a Oferta
 * Categoria: Iniciante | Nível 1 | Assunto: Matemática
 * Link: https://judge.beecrowd.com/pt/problems/view/2896
 */

#include <iostream>

#include <cmath>



using namespace std;



int main() {



    int refrigerantesComprados = 0;

    int garrafasVazias = 0;

    int segundoDia = 0;



    int casosTeste;

    cin >> casosTeste;



    for (int i = 0; i < casosTeste; i++) {



        cin >> refrigerantesComprados >> garrafasVazias;



        segundoDia = round(

            (refrigerantesComprados / garrafasVazias) +

            (refrigerantesComprados % garrafasVazias)

        );



        cout << segundoDia << endl;

    }



    return 0;

}