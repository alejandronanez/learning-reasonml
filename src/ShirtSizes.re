type shirtSize =
  | Small
  | Medium
  | Large
  | XLarge;

let mySize: shirtSize = Medium;

let otherSize = Large;

let priceIf = (size: shirtSize) : float =>
  if (size === Small) {
    11.00;
  } else if (size === Medium) {
    12.50;
  } else if (size === Large) {
    14.00;
  } else {
    16.00;
  };

Js.log(priceIf(mySize));

Js.log(priceIf(otherSize));

/* This is better ^_^ */
let price = (size: shirtSize) : float =>
  switch (size) {
  | Small => 11.00
  | Medium => 12.50
  | Large => 14.00
  | XLarge => 16.00
  };

Js.log(price(mySize));

Js.log(price(otherSize));

let stringOfShirtSize = (size: shirtSize) : string =>
  switch (size) {
  | Small => "S"
  | Medium => "M"
  | Large => "L"
  | XLarge => "XL"
  };

Js.log(stringOfShirtSize(mySize));

let shirtSizeOfString = (str: string) : shirtSize =>
  switch (str) {
  | "S" => Small
  | "M" => Medium
  | "L" => Large
  | "XL" => XLarge
  | _ => Medium
  };