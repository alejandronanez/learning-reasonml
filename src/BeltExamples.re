let toFloat = (str: string) : option(float) => {
  let result = Js.Float.fromString(str);
  if (Js.Float.isNaN(result)) {
    None;
  } else {
    Some(result);
  };
};

let cube = (x: float) : float => x *. x *. x;

let reciprocal = (x: float) : option(float) =>
  if (x !== 0.0) {
    Some(1.0 /. x);
  } else {
    None;
  };

let method1 = (input: string) : unit => {
  let x = toFloat(input);
  let oneOver =
    switch (x) {
    | Some(value) => reciprocal(value)
    | None => None
    };
  let result =
    switch (oneOver) {
    | Some(value) => Some(cube(value))
    | None => None
    };
  let output =
    switch (result) {
    | Some(value) => Some(Js.Float.toFixedWithPrecision(value, ~digits=3))
    | None => None
    };
  switch (output) {
  | Some(value) => Js.log("The result is " ++ value)
  | None => Js.log("Could not calculate result.")
  };
};

method1("2.0"); /* output: The result is 0.125 */

let method2 = (input: string) : unit => {
  let x = toFloat(input);
  let oneOver = Belt.Option.flatMap(x, reciprocal);
  let result = Belt.Option.map(oneOver, cube);
  let output =
    Belt.Option.map(result, Js.Float.toFixedWithPrecision(~digits=3));
  switch (output) {
  | Some(value) => Js.log("The result is " ++ value)
  | None => Js.log("Could not calculate result.")
  };
};

method2("2.0"); /* output: The result is 0.125 */