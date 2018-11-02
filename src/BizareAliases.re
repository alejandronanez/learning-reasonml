type scoreType = int;

type percentType = float;

let calcPercent = (score: scoreType, max: scoreType) : percentType =>
  float_of_int(score) /. float_of_int(max) *. 100.0;