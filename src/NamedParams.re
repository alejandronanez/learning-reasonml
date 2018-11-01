let payment = (~principal, ~apr, ~years) => {
  let r = (apr /. 12.0) /. 100.0;
  let n = float_of_int(years * 12);
  let powerTerm = (1.0 +. r) ** n;
  principal *. (r *. powerTerm) /. (powerTerm -. 1.0);
};

let amount = payment(~principal = 10000.0, ~apr = 5.0, ~years = 30);
Js.log2("Amount per month: $",
  Js.Float.toFixedWithPrecision(amount, ~digits=2));

  let amount2 = payment(~apr = 7.5, ~years = 15, ~principal = 25000.0);
  Js.log2("Amount per month: $",
    Js.Float.toFixedWithPrecision(amount2, ~digits=2));