let call = (country: string, area: string, number: string) : string =>
  country ++ " " ++ area ++ " " ++ number;

Js.log2("Call Kim at", call("49", "030", "118 99"));

let callGermany = call("049");

let callBerlin = call("049", "030");

Js.log2("Call Germany:", callGermany);

Js.log2("Call Berling:", callBerlin);