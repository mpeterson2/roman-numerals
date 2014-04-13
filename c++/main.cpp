#include <iostream>
#include <string>
#include "RomanNumeral.h"

using namespace std;

void printConversion(string rom);
void printConversion(int num);

int main() {
	printConversion("IX");
	printConversion("XI");
	printConversion("M");
	printConversion("MCMLIV");
	printConversion("MCMXC");
	printConversion("MMXIV");
	printConversion("MMMMXVIII");

	cout << endl;

	printConversion(4);
	printConversion(2340);
	printConversion(120);
	printConversion(3023);
	printConversion(4999);
	printConversion(158);
	return 0;
}

void printConversion(string rom) {
	RomanNumeral rn;
	cout << rom << " = " << rn.getNum(rom) << endl;
}

void printConversion(int num) {
	RomanNumeral rn;
	cout << num << " = " << rn.getNumeral(num) << endl;
}
