var input = require("fs").readFileSync("stdin.txt", "utf-8");
var lines = input.split('\n');

var nome = lines.shift();
var salarioFixo = Number(lines.shift());
var montante = Number(lines.shift());
var salarioTotal = (montante * 0.15) + salarioFixo;

console.log(`TOTAL = R$ ${salarioTotal.toFixed(2)}`);