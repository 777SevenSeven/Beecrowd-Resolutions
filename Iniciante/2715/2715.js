
const fs = require('fs');

const entrada = fs.readFileSync(0, 'utf8').trim().split(/\s+/).map(Number);
let indice = 0;

while (indice < entrada.length) {
    const N = entrada[indice++];

    const a = entrada.slice(indice, indice + N);
    indice += N;

    let total = 0;

    for (let i = 0; i < N; i++) {
        total += a[i];
    }

    let somaRangel = 0;
    let melhor = Infinity;

    for (let i = 0; i < N; i++) {
        somaRangel += a[i];

        const somaGugu = total - somaRangel;
        const diferenca = Math.abs(somaRangel - somaGugu);

        if (diferenca < melhor) {
            melhor = diferenca;
        }
    }

    console.log(melhor);
}
