const fs = require("fs");
let a = (parseInt)(fs.readFileSync(0));

a += 2;

console.log(a);