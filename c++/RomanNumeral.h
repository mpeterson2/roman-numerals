#ifndef ROMANNUMERAL_H_
#define ROMANNUMERAL_H_

#include <string>
#include <vector>
using namespace std;

class RomanNumeral {
public:
	RomanNumeral();
	int getNum(string rom);
	string getNumeral(int num);
private:
	vector<string> iVals;
	int toNum(string numeral);
	string charToString(char c);
};

#endif
