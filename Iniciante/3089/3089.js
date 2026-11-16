
const fs = require('fs');

const dados = fs.readFileSync(0, 'utf8').trim().split(/\s+/).map(Number);

let indice = 0;
const saida = [];

while (indice < dados.length) {
    const n = dados[indice++];

    if (n === 0) {
        break;
    }

    const presentes = dados.slice(indice, indice + 2 * n);
    indice += 2 * n;

    let maior = -Infinity;
    let menor = Infinity;

    for (let i = 0; i < n; i++) {
        const soma = presentes[i] + presentes[2 * n - 1 - i];

        if (soma > maior) {
            maior = soma;
        }

        if (soma < menor) {
            menor = soma;
        }
    }

    saida.push(`${maior} ${menor}`);
}

console.log(saida.join('\n'));
