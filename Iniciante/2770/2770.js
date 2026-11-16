
const fs = require('fs');

const dados = fs.readFileSync(0, 'utf8').trim().split(/\s+/).map(Number);
let indice = 0;

while (indice < dados.length) {
    const X = dados[indice++];
    const Y = dados[indice++];
    const M = dados[indice++];

    for (let i = 0; i < M; i++) {
        const Xi = dados[indice++];
        const Yi = dados[indice++];

        if ((Xi <= X && Yi <= Y) ||
            (Xi <= Y && Yi <= X)) {
            console.log("Sim");
        } else {
            console.log("Nao");
        }
    }
}
