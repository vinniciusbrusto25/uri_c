var input = require("fs").readFileSync("stdin.txt", "utf-8");

var raio = parseFloat(input);
var A = (raio ** 2) * parseFloat(3.14159);

console.log(`A=${A.toFixed(4)}`);