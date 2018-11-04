type colorSpec =
  | White
  | Black
  | Gray(float)
  | RGB(int, int, int);

let color1 = White;

let color2 = Black;

let color3 = Gray(0.5);

let color4 = RGB(255, 255, 255);

let stringOfColorSpec = (cspec: colorSpec) : string =>
  switch (cspec) {
  | White => "White"
  | Black => "Black"
  | Gray(_) => "Gray"
  | RGB(r, g, b) =>
    ""
    ++ string_of_int(r)
    ++ ","
    ++ string_of_int(g)
    ++ ","
    ++ string_of_int(b)
  };

let resultColorOne = stringOfColorSpec(color1);

let resultColorTwo = stringOfColorSpec(color2);

let resultColorThree = stringOfColorSpec(color3);

let resultColorFour = stringOfColorSpec(color4);

Js.log({j| $resultColorOne |j});

Js.log({j| $resultColorTwo |j});

Js.log({j| $resultColorThree |j});

Js.log({j| $resultColorFour |j});