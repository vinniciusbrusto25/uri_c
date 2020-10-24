var input = require("fs").readFileSync("stdin.txt", "utf-8");
var lines = input.split('\n');

var A = parseInt(lines.shift());
var B = parseInt(lines.shift());

var X = A + B;

console.log(`X = ${X}`);