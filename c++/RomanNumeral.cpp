/*
 * RomanNumeral.cpp
 *
 *  Created on: Apr 13, 2014
 *      Author: michael
 */

#include "RomanNumeral.h"
#include <iostream>
#include <sstream>
using namespace std;

RomanNumeral::RomanNumeral() {
	iVals.push_back("M");
	iVals.push_back("CM");
	iVals.push_back("D");
	iVals.push_back("CD");
	iVals.push_back("C");
	iVals.push_back("XC");
	iVals.push_back("L");
	iVals.push_back("XL");
	iVals.push_back("X");
	iVals.push_back("IX");
	iVals.push_back("V");
	iVals.push_back("IV");
	iVals.push_back("I");
}

int RomanNumeral::getNum(string rom) {
	int num = 0;

	for (int i = 0; i < rom.length(); i++) {

		string val = charToString(rom[i]);

		if (i != rom.length() - 1) {
			string valPlus1 = charToString(rom[i + 1]);
			if (toNum(val) < toNum(valPlus1)) {
				num -= toNum(val);
			} else {
				num += toNum(val);
			}
		} else {
			num += toNum(val);
		}
	}

	return num;
}

string RomanNumeral::getNumeral(int num) {
	string rom = "";

	while (num > 0) {
		for (int i = 0; i < iVals.size(); i++) {
			string symbol = iVals[i];
			int val = toNum(symbol);
			while (val <= num) {
				rom += symbol;
				num -= val;
			}
		}
	}

	return rom;
}

int RomanNumeral::toNum(string rom) {
	if (rom == "M") return 1000;
	if (rom == "CM") return 900;
	if (rom == "D") return 500;
	if (rom == "CD") return 400;
	if (rom == "C") return 100;
	if (rom == "XC") return 90;
	if (rom == "L") return 50;
	if (rom == "XL") return 40;
	if (rom == "X") return 10;
	if (rom == "IX") return 9;
	if (rom == "V") return 5;
	if (rom == "IV") return 4;
	if (rom == "I") return 1;
	return 0;
}

string RomanNumeral::charToString(char c) {
	stringstream ss;
	string s;
	ss << c;
	ss >> s;
	return s;
}
