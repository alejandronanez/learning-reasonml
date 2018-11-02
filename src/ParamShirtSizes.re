type shirtSize =
  | Small
  | Medium
  | Large
  | XLarge(int);

let mySize: shirtSize = Medium;

let otherSize = Large;

let bigSize = XLarge(1);

let veryBigSize = XLarge(3);

let price = (size: shirtSize) : float =>
  switch (size) {
  | Small => 11.00
  | Medium => 12.50
  | Large => 14.00
  | XLarge(n) => 16.00 +. float_of_int(n - 1) *. 0.50
  };

Js.log(price(mySize));

Js.log(price(bigSize));

Js.log(price(veryBigSize));