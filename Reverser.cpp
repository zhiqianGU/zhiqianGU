#include "Reverser.h"
#include<cmath>

int Reverser::reverseDigit(int value){
if(value < 0)
{return - 1; }
if (value / 10 == 0) {
	return value;
}
    int num = value - ((value / 10) * 10);
	int power = 0; 
	while (value / pow(10, power) >= 1) 
	{ power++; }
	power--;
	
	int sum = num * pow(10, power);
		return sum + reverseDigit(value / 10);
}

string Reverser::reverseString(string letters) {

	if (letters == " ") { return "ERROR"; }
	if (letters.length() <= 1) { return letters; }
	char last = letters.back();
	letters.pop_back();
	return last + reverseString(letters);
}
