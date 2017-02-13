//============================================================================
// Name        : exercise1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :

// This console program expects input from standard input, computes the
// binary representation of the number, stores it in an array, and prints it out in a loop.



//============================================================================

#include <iostream>
#include <cmath>
using namespace std;


int main() {
	// input
	int input;
	cout << "Please enter an integer value: ";
	cin >> input;

	// init
	int quo=input;
	int rem;
	int numbits=ceil(log2(input));
	int binary_rep[numbits];
	int i=0;

	// process
	while (quo>0) {
		quo= input>>1;
		rem= input-(quo<<1);
		input=quo;
		binary_rep[i]=rem;
		i=i+1;
	}


	// output
	cout << "Binary representation is: ";
	while(i<numbits) {
		cout<<binary_rep[i];
		i=i+1;
	}
	return 0;
}
