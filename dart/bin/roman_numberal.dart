import "package:roman_numberal/roman-numberal.dart";

void main() {
  printConversion(rom: "IX");
  printConversion(rom: "XI");
  printConversion(rom: "M");
  printConversion(rom: "MCMLIV");
  printConversion(rom: "MCMXC");
  printConversion(rom: "MMXIV");
  printConversion(rom: "MMMMXVIII");

  print("");

  printConversion(num: 4);
  printConversion(num: 2340);
  printConversion(num: 120);
  printConversion(num: 3023);
  printConversion(num: 4999);
  printConversion(num: 158);
}

void printConversion({int num, String rom}) {
  if(num != null) {
    print("$num = ${new RomanNumeral().getNumeral(num)}");
  }
  else if(rom != null) {
    print("$rom = ${new RomanNumeral().getNum(rom)}");
  }
}