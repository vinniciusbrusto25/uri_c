var input = require("fs").readFileSync("stdin.txt", "utf-8");
var lines = input.split('\n');

var A = parseInt(lines.shift());
var B = parseInt(lines.shift());
var SOMA = A + B;

console.log(`SOMA = ${SOMA}`);