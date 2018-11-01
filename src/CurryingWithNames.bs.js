// Generated by BUCKLESCRIPT VERSION 4.0.7, PLEASE EDIT WITH CARE
'use strict';

var Caml_int32 = require("bs-platform/lib/js/caml_int32.js");

function payment(principal, apr, years) {
  var r = apr / 12.0 / 100.0;
  var n = Caml_int32.imul(years, 12);
  var powerTerm = Math.pow(1.0 + r, n);
  return principal * (r * powerTerm) / (powerTerm - 1.0);
}

function usPayment(param) {
  return (function (param$1) {
      return payment(param, param$1, 30);
    });
}

function ukPayment(param) {
  return (function (param$1) {
      return payment(param, param$1, 25);
    });
}

function dePayment(param) {
  return (function (param$1) {
      return payment(param, param$1, 20);
    });
}

function toFixed(prim, prim$1) {
  return prim.toFixed(prim$1);
}

console.log("Loan of 10000 at 5%");

console.log("US: $", usPayment(10000.0)(5.0).toFixed(2));

console.log("UK: £", ukPayment(10000.0)(5.0).toFixed(2));

console.log("DE: €", dePayment(10000.0)(5.0).toFixed(2));

exports.payment = payment;
exports.usPayment = usPayment;
exports.ukPayment = ukPayment;
exports.dePayment = dePayment;
exports.toFixed = toFixed;
/*  Not a pure module */