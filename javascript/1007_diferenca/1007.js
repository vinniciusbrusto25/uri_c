var input = require("fs").readFileSync("stdin.txt", "utf-8");
var lines = input.split('\n');

var A = Number(lines.shift());
var B = Number(lines.shift());
var C = Number(lines.shift());
var D = Number(lines.shift());

var DIF =  ((A * B) - (C * D));

console.log(`DIFERENCA = ${DIF}`);