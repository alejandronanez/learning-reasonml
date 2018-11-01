let discount = (~price: float, ~discount: float) : float => {
  let totalDiscount = price *. (discount /. 100.0);
  price -. totalDiscount;
};

let halfOff = discount(~discount=50.0);

let tenPercentOff = discount(~discount=10.0);

Js.log2("Half off of 100:", halfOff(~price=100.0));

Js.log2("10% off of 100:", tenPercentOff(~price=10.0));