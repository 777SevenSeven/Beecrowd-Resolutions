
const fs = require('fs');

const entrada = fs.readFileSync(0, 'utf8').trim().split(/\s+/).map(Number);

let indice = 0;
const N = entrada[indice++];

const carneiros = [];

let total = 0;

for (let i = 0; i < N; i++) {
    carneiros[i] = entrada[indice++];
    total += carneiros[i];
}

const visitada = Array(N).fill(false);

let pos = 0;
let atacadas = 0;

while (pos >= 0 && pos < N) {
    // Conta a estrela somente na primeira visita
    if (!visitada[pos]) {
        visitada[pos] = true;
        atacadas++;
    }

    // Guarda a quantidade antes do roubo
    const antes = carneiros[pos];

    // Rouba um carneiro, se houver
    if (carneiros[pos] > 0) {
        carneiros[pos]--;
        total--;
    }

    // A direção depende da quantidade antes do roubo
    if (antes % 2 === 1) {
        pos++;
    } else {
        pos--;
    }
}

console.log(`${atacadas} ${total}`);
