/*
 * Beecrowd | 1047 - Tempo de Jogo com Minutos
 * Categoria: Iniciante | Nível 9 | Assunto: Seleção
 * Link: https://judge.beecrowd.com/pt/problems/view/1047
 */



const fs = require('fs');



// Entrada de dados

const [horaInicial, minutoInicial, horaFinal, minutoFinal] =

    fs.readFileSync(0, 'utf8').trim().split(/\s+/).map(Number);



let resultadoHoras;

let resultadoMinutos;



// Cálculo das horas

if (

    horaInicial < horaFinal ||

    (horaInicial === horaFinal && minutoInicial < minutoFinal)

) {

    resultadoHoras = horaFinal - horaInicial;

} else if (horaInicial > horaFinal) {

    resultadoHoras = 24 - horaInicial + horaFinal;

} else {

    resultadoHoras = 24;

}



// Cálculo dos minutos

if (minutoInicial <= minutoFinal) {

    resultadoMinutos = minutoFinal - minutoInicial;

} else {

    resultadoHoras--; // Reduz uma hora

    resultadoMinutos = 60 + minutoFinal - minutoInicial;

}



// Saída de dados

console.log(

    `O JOGO DUROU ${resultadoHoras} HORA(S) E ${resultadoMinutos} MINUTO(S)`

);

