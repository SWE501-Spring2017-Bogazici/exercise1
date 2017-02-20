#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char **argv)
{
	int intNumber, bitTemp, i;
	unsigned int intNumberUnsigned;
	string getNumber, ShowNumber="";
	cout << "Please enter a number:" << endl;
	getline(cin, getNumber);
	intNumber = std::stoi(getNumber);
	intNumberUnsigned = intNumber;
	for(i = 0; i < 32; i++){

		bitTemp = intNumberUnsigned % 2;
		ShowNumber = std::to_string(bitTemp) + ShowNumber;
		intNumberUnsigned = intNumberUnsigned >> 1;
		
	}
	
	cout << "The result: " + ShowNumber << endl;
	return 0;
}