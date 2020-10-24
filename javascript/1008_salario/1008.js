var input = require("fs").readFileSync("stdin.txt", "utf-8");
var lines = input.split('\n');

var codigo = parseInt(lines.shift());
var qntHoras = parseInt(lines.shift());
var valorHora = Number(lines.shift());
var salario = qntHoras * valorHora;

console.log(`NUMBER = ${codigo}\nSALARY = U$ ${salario.toFixed(2)}`);