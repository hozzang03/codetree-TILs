const fs = require("fs");

let input = fs.readFileSync(0).toString().trim().split(' ');

[input[0],input[1]] = [input[1],input[0]];

let a = Number(input[0]);
let b = Number(input[1]);

console.log(a , b);