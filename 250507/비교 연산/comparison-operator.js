const fs = require("fs");

let input = fs.readFileSync(0).toString().split(" ");

let a = Number(input[0]);
let b = Number(input[1]);

if(a>=b ? console.log(1):console.log(0));
if(a>b ? console.log(1):console.log(0));
if(a<=b ? console.log(1):console.log(0));
if(a<b ? console.log(1):console.log(0));
if(a ===b ? console.log(1):console.log(0));
if(a!=b ? console.log(1):console.log(0));

