// Generated by BUCKLESCRIPT VERSION 4.0.7, PLEASE EDIT WITH CARE
'use strict';


function call(country, area, number) {
  return country + (" " + (area + (" " + number)));
}

console.log("Call Kim at", "49 030 118 99");

function callGermany(param, param$1) {
  return call("049", param, param$1);
}

function callBerlin(param) {
  return call("049", "030", param);
}

console.log("Call Germany:", callGermany);

console.log("Call Berling:", callBerlin);

exports.call = call;
exports.callGermany = callGermany;
exports.callBerlin = callBerlin;
/*  Not a pure module */
