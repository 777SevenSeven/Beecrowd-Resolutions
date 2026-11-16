/*
 * Beecrowd | 3343 - Attack On Gasparini
 * Categoria: Iniciante | Nível 8 | Assunto: Ad-Hoc
 * Link: https://judge.beecrowd.com/pt/problems/view/3343
 */



const fs = require('fs');



// Entrada de dados

const input = fs.readFileSync(0, 'utf8').trim().split(/\s+/);

let pos = 0;



const n = Number(input[pos++]);

const x = Number(input[pos++]);



const ataque = input[pos++];



const p = Number(input[pos++]);

const m = Number(input[pos++]);

const g = Number(input[pos++]);



// Inicializa as muralhas com resistência x

const walls = Array(n).fill(x);



let posP = 0;

let posM = 0;

let posG = 0;



for (const titan of ataque) {



    if (titan === 'P') {



        while (walls[posP] < p) {

            posP++;

        }



        walls[posP] -= p;



    } else if (titan === 'M') {



        while (walls[posM] < m) {

            posM++;

        }



        walls[posM] -= m;



    } else { // G



        while (walls[posG] < g) {

            posG++;

        }



        walls[posG] -= g;

    }

}



// Descobre qual foi a última muralha utilizada

const resposta = Math.max(posP, posM, posG) + 1;



// Saída de dados

console.log(resposta);

