/*
 * Beecrowd | 2709 - As Moedas de Robbie
 * Categoria: Iniciante | Nível 9
 * Link: https://judge.beecrowd.com/pt/problems/view/2709
 */



import * as fs from 'fs';



// Entrada de dados

const input: string = fs.readFileSync(0, 'utf8').trim();



if (input.length > 0) {

    const valores: number[] = input.split(/\s+/).map(Number);

    let pos: number = 0;



    while (pos < valores.length) {

        const M: number = valores[pos++];



        const moedas: number[] = [];



        for (let i = 0; i < M; i++) {

            moedas.push(valores[pos++]);

        }



        const N: number = valores[pos++];



        let soma: number = 0;



        // Desenvolvimento de dados

        for (let i = M - 1; i >= 0; i -= N) {

            soma += moedas[i];

        }



        // Verificação se é primo

        let primo: boolean = true;



        if (soma < 2) {

            primo = false;

        }



        for (let i = 2; i < soma; i++) {

            if (soma % i === 0) {

                primo = false;

                break;

            }

        }



        // Saída de dados

        if (primo) {

            console.log(

                "You’re a coastal aircraft, Robbie, a large silver aircraft."

            );

        } else {

            console.log("Bad boy! I’ll hit you.");

        }

    }

}

