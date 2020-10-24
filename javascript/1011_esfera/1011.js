var input = require("fs").readFileSync("stdin.txt", "utf-8");
var raio = parseFloat(input);
const PI = parseFloat(3.14159);
var volume = (parseFloat(4/3) * PI * (raio * raio * raio));

console.log(`VOLUME = ${volume.toFixed(3)}`);