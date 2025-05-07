const fs = require("fs");

let input = fs.readFileSync(0).toString().trim();

console.log(Number(input));

if(input<0){
    console.log("minus");
}