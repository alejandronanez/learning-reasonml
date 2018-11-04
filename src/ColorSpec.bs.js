// Generated by BUCKLESCRIPT VERSION 4.0.7, PLEASE EDIT WITH CARE
'use strict';

var Block = require("bs-platform/lib/js/block.js");

var color3 = /* Gray */Block.__(0, [0.5]);

var color4 = /* RGB */Block.__(1, [
    255,
    255,
    255
  ]);

function stringOfColorSpec(cspec) {
  if (typeof cspec === "number") {
    if (cspec === 0) {
      return "White";
    } else {
      return "Black";
    }
  } else if (cspec.tag) {
    return "" + (String(cspec[0]) + ("," + (String(cspec[1]) + ("," + String(cspec[2])))));
  } else {
    return "Gray";
  }
}

var resultColorOne = stringOfColorSpec(/* White */0);

var resultColorTwo = stringOfColorSpec(/* Black */1);

var resultColorThree = stringOfColorSpec(color3);

var resultColorFour = stringOfColorSpec(color4);

console.log(" " + (String(resultColorOne) + " "));

console.log(" " + (String(resultColorTwo) + " "));

console.log(" " + (String(resultColorThree) + " "));

console.log(" " + (String(resultColorFour) + " "));

var color1 = /* White */0;

var color2 = /* Black */1;

exports.color1 = color1;
exports.color2 = color2;
exports.color3 = color3;
exports.color4 = color4;
exports.stringOfColorSpec = stringOfColorSpec;
exports.resultColorOne = resultColorOne;
exports.resultColorTwo = resultColorTwo;
exports.resultColorThree = resultColorThree;
exports.resultColorFour = resultColorFour;
/* resultColorOne Not a pure module */