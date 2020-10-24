var input = require("fs").readFileSync("stdin.txt", "utf-8");
var lines = input.split('\n');

const pesoA = 3.5;
const pesoB = 7.5;
var a = Number(lines.shift());
var b = Number(lines.shift());
var media = ((a * pesoA) + (b * pesoB)) / (pesoA + pesoB);

console.log(`MEDIA = ${media.toFixed(5)}`);