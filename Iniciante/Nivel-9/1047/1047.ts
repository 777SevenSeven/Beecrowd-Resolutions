/*
 * Beecrowd | 1047 - Tempo de Jogo com Minutos
 * Categoria: Iniciante | Nível 9 | Assunto: Seleção
 * Link: https://judge.beecrowd.com/pt/problems/view/1047
 */



import * as fs from 'fs';



// Entrada de dados

const valores: number[] = fs

    .readFileSync(0, 'utf8')

    .trim()

    .split(/\s+/)

    .map(Number);



const horaInicial: number = valores[0];

const minutoInicial: number = valores[1];

const horaFinal: number = valores[2];

const minutoFinal: number = valores[3];



let resultadoHoras: number;

let resultadoMinutos: number;



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

