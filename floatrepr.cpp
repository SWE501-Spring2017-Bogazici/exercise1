//============================================================================
// Name        : floatrepr.cpp
// Author      : Ali Durþen
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

int main() {
	
	//cout << "Hello!" << endl; // prints Hello!

	
	float tamsayi, kusurat, input;
	string tamsayiS="";
	cout << "Enter a number, non-integers accepted:" << endl;
	cin >> input;
	bool sign = (input < 0);
	input = abs(input);
	kusurat = modf(input, &tamsayi);
		
	//tamsayı kısmının binary gösterimi, string olarak//
	int tK = static_cast<int>(tamsayi);
	while(tK != 0){
		tamsayiS = to_string(tK%2)+tamsayiS;
		tK = tK/2;
	}
	if(tamsayiS=="") tamsayiS="0";

	//küsüratın binary gösterimi, string olarak(?)//
	bool kusuratB[28];
	float kusuratK = kusurat;
	int i;	//declared outside, so if loop breaks we know the digits
	for (i = 0; i < 28; i++)
	{
		kusurat *= 2;
		kusuratB[i] = (kusurat>1);
		if(kusuratB[i]) kusurat--;
		if(!kusurat) break;
	}
	
	
	
	
	
	cout << input << " = " << tamsayi << " + " << kusurat << endl;
	cout << "Sign was: " << sign << endl;
	cout << "Integer part of (absolute) input in binary calculated to be: " << tamsayiS << endl;
	cout << "Fractional part of (absolute) input in binary calculated to be: " << endl;
	for(int j = 0; j<i+1 && j<28; j++) { printf("%d", kusuratB[j]); }

	
	return 0;
}