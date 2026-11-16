/*
 * Beecrowd | 1837 - Prefácio
 * Categoria: Iniciante | Nível 7 | Assunto: Ad hoc
 * Link: https://judge.beecrowd.com/pt/problems/view/1837
 */



const fs = require('fs');



// Entrada de dados

const [a, b] = fs.readFileSync(0, 'utf8')

    .trim()

    .split(/\s+/)

    .map(BigInt);



// Cálculo do quociente com truncamento em direção a zero

let q = a / b;



// Cálculo do resto

let r = a % b;



// Ajuste para garantir resto não negativo

if (r < 0n) {

    if (b > 0n) {

        q -= 1n;

        r += b;

    } else {

        q += 1n;

        r -= b;

    }

}



// Saída de dados

console.log(`${q} ${r}`);

