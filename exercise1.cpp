#include <iostream>
#include <string>
using namespace std;


int main(int argc, char** argv) {

	int n,quotient,remainder;
	
	int binaryRepresentation[32] = {0};
	int Length_of_array = sizeof(binaryRepresentation) / sizeof(binaryRepresentation[0]);
	
	int binaryplace = 31; 

	cout << "Enter a decimal number: ";
	
	cin >> n;
	
	while(n > 1){
		
		remainder = n / 2;
		quotient = n % 2;
		
		cout << "remainder:  " << remainder << "  and quotient = "<<quotient<<endl;
		
		binaryRepresentation[binaryplace] = quotient;
		binaryplace--;
		
		if(remainder < 2){
			binaryRepresentation[binaryplace] = remainder;
			binaryplace--;
		}
		
		
		n = remainder;
	
	}

	cout << "Binary Representation : ";
	for(int j = 0 ; j < Length_of_array; j++){
		
		cout << binaryRepresentation[j];
		
	}


	
	return 0;
}
