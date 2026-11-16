
const fs = require('fs');

const input = fs.readFileSync(0, 'utf8').trim();

if (input.length > 0) {
    const valores = input.split(/\s+/).map(Number);
    let pos = 0;

    while (pos < valores.length) {
        const M = valores[pos++];

        const moedas = [];

        for (let i = 0; i < M; i++) {
            moedas[i] = valores[pos++];
        }

        const N = valores[pos++];

        let soma = 0;

        // Soma das moedas com saltos de N posições
        for (let i = M - 1; i >= 0; i -= N) {
            soma += moedas[i];
        }

        // Verificação se é primo
        let primo = true;

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
