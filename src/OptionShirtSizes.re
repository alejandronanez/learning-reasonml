type shirtSize =
  | Small
  | Medium
  | Large
  | XLarge(int);

let mySize: shirtSize = Medium;

let bigSize = XLarge(1);

let veryBigSize = XLarge(3);

let price = (size: option(shirtSize)) : option(float) =>
  switch (size) {
  | Some(Small) => Some(11.00)
  | Some(Medium) => Some(12.50)
  | Some(Large) => Some(14.00)
  | Some(XLarge(n)) => Some(16.00 +. float_of_int(n - 1) *. 0.50)
  | None => None
  };

let shirtSizeOfString = (str: string) : option(shirtSize) =>
  switch (str) {
  | "S" => Some(Small)
  | "M" => Some(Medium)
  | "L" => Some(Large)
  | "XL" => Some(XLarge(1))
  | "XXL" => Some(XLarge(2))
  | "XXXL" => Some(XLarge(3))
  | "XXXXL" => Some(XLarge(4))
  | _ => None
  };

let toFixed = Js.Float.toFixedWithPrecision;

let displayedPrice = (input: string) : unit => {
  let size = shirtSizeOfString(input);
  let amount = price(size);
  switch (amount) {
  | Some(cost) =>
    let costStr = toFixed(cost, ~digits=2);
    Js.log({j|Your $input shirt costs \$$costStr.|j});
  | None => Js.log({j|Cannot determine price for $input|j})
  };
};

displayedPrice("XXL");