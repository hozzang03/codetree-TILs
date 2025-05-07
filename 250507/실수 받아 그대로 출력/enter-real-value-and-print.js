const fs = require("fs");

let a = (parseFloat)(Number(fs.readFileSync(0).toString())).toFixed(2);

console.log(a);

