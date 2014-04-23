
class RomanNumeral {

  List<String> _iVals;

  RomanNumeral() {
    _iVals = ["M", "CM", "D", "CD", "C", "XC", "L",
                  "XL", "X", "IX", "V", "IV", "I"];
  }

  int _toNum(String numeral) {
    switch(numeral) {
      case "M": return 1000;
      case "CM": return 900;
      case "D": return 500;
      case "CD": return 400;
      case "C": return 100;
      case "XC": return 90;
      case "L": return 50;
      case "XL": return 40;
      case "X": return 10;
      case "IX": return 9;
      case "V": return 5;
      case "IV": return 4;
      case "I": return 1;
      default: return 0;
    }
  }

  int getNum(String numeral) {
    int num = 0;

    for(int i=0; i<numeral.length; i++) {
      if(i != numeral.length - 1 && _toNum(numeral[i]) < _toNum(numeral[i+1])) {
        num -= _toNum(numeral[i]);
      }
      else {
        num += _toNum(numeral[i]);
      }
    }

    return num;
  }

  String getNumeral(int num) {
    String rom = "";

    while(num > 0) {
      for(String symbol in _iVals) {
        int val = _toNum(symbol);
        while(val <= num) {
          rom += symbol;
          num -= val;
        }
      }
    }

    return rom;
  }

}