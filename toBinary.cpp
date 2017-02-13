// Firat Atalay
// firatatalay@gmail.com

#include <iostream>
#include <string>
using namespace std;

int main(int argc,  char* argv[]) {
	if (argc < 2) {
		printf("Input argument needed!\n");
	} else {
		// save command line input as a integer
		int input;
		sscanf(argv[1], "%d", &input);

		// calculate the binary in reverse order
		int calc = input;
		string s = "";
		while ((calc >> 1) != 0 ) {
			s += (calc%2) ? "1" : "0";
			calc = calc>>1;
		}
		s += (calc%2) ? "1" : "0";
		calc = calc>>1;

		// correct the binary order
		string output = "";
		for (int i = (s.length()-1); i>=0; --i) {
			output += s[i];
		}

		// output
		printf("Input is: %d \nOutput is: %s \n", input, output.c_str());
		return 0;
	}
}
