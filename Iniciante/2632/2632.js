
const fs = require('fs');

// Entrada de dados
const input = fs.readFileSync(0, 'utf8').trim();

if (input.length > 0) {
    const valores = input.split(/\s+/);
    let pos = 0;

    const casosTeste = Number(valores[pos++]);

    for (let i = 0; i < casosTeste; i++) {
        const width = Number(valores[pos++]);
        const height = Number(valores[pos++]);
        const x0 = Number(valores[pos++]);
        const y0 = Number(valores[pos++]);

        const tipoMagia = valores[pos++];
        const nivelMagia = Number(valores[pos++]);
        const cx = Number(valores[pos++]);
        const cy = Number(valores[pos++]);

        let raioMagia = 0;
        let danoRecebido = 0;

        // Descobrindo dano e raio da magia
        if (tipoMagia === "fire") {
            danoRecebido = 200;

            if (nivelMagia === 1)
                raioMagia = 20;
            else if (nivelMagia === 2)
                raioMagia = 30;
            else
                raioMagia = 50;

        } else if (tipoMagia === "water") {
            danoRecebido = 300;

            if (nivelMagia === 1)
                raioMagia = 10;
            else if (nivelMagia === 2)
                raioMagia = 25;
            else
                raioMagia = 40;

        } else if (tipoMagia === "earth") {
            danoRecebido = 400;

            if (nivelMagia === 1)
                raioMagia = 25;
            else if (nivelMagia === 2)
                raioMagia = 55;
            else
                raioMagia = 70;

        } else if (tipoMagia === "air") {
            danoRecebido = 100;

            if (nivelMagia === 1)
                raioMagia = 18;
            else if (nivelMagia === 2)
                raioMagia = 38;
            else
                raioMagia = 60;
        }

        // Descobrindo o ponto do retângulo mais próximo do centro
        let pontoX;
        let pontoY;

        if (cx < x0)
            pontoX = x0;
        else if (cx > x0 + width)
            pontoX = x0 + width;
        else
            pontoX = cx;

        if (cy < y0)
            pontoY = y0;
        else if (cy > y0 + height)
            pontoY = y0 + height;
        else
            pontoY = cy;

        // Distância entre o centro da explosão e o ponto mais próximo
        const distanciaX = cx - pontoX;
        const distanciaY = cy - pontoY;

        const distanciaQuadrado =
            distanciaX * distanciaX + distanciaY * distanciaY;

        const raioQuadrado = raioMagia * raioMagia;

        // Verificando se o círculo intercepta o retângulo
        if (distanciaQuadrado <= raioQuadrado)
            console.log(danoRecebido);
        else
            console.log(0);
    }
}
