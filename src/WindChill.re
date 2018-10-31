let temperature = 5.0;
let velocity = 20.0;

let result = 13.12 +. (0.6215 *. temperature ) -. (11.37 *. Js.Math.pow_float(velocity, 0.16)) +. (0.3965 *. temperature *. Js.Math.pow_float(velocity, 0.16));

Js.log({j|At temperature 5 degrees C and wind speed 20 km/hr,
the wind chill temperature is $result|j})