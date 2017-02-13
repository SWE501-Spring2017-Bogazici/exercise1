# exercise1
print bit representation of an integer
// homework 1 - SWE 501

// output integers in binary format
#include <iostream>
using namespace std;

int main() {
	
	int x = 11; 
	
	if (x >= 0) {
		
		for (int i = 1; i <= 32; i++) {
						
			unsigned y;
			y = x % 2;
			x = (x-y)/2;
			
			cout << y;
			
			if (i % 8 == 0) {
				cout << ' ';
			}
		}
				
	}
	
	else {
		
		cout << 'Negative number' << endl;
	}
	
}
