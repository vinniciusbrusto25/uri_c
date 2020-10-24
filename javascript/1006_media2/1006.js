var input = require("fs").readFileSync("stdin.txt", "utf-8");
var lines = input.split('\n');

const pesoA = 2;
const pesoB = 3;
const pesoC = 5;
var a = Number(lines.shift());
var b = Number(lines.shift());
var c = Number(lines.shift());
var media = ((a * pesoA) + (b * pesoB) + (c * pesoC)) / (pesoA + pesoB + pesoC);

console.log(`MEDIA = ${media.toFixed(1)}`);