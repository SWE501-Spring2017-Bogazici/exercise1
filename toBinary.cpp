// Firat Atalay
// firatatalay@gmail.com

#include <iostream>
#include <string>
using namespace std;

int main(int argc,  char* argv[]) {
	if (argc < 2) {
		cout << "Input argument is needed!" << endl;
	} else {
		// save command line input as a integer
		int input;
		sscanf(argv[1], "%d", &input);

		// calculate the binary in reverse order
		int calc = (input < 0) ? (input*-1) : (input);
		string s = "";
		while ((calc >> 1) != 0 ) {
			s += (calc%2) ? "1" : "0";
			calc = calc>>1;
		}
		s += (calc%2) ? "1" : "0";
		calc = calc>>1;

		// correct the binary order
		string output = "";
		for (int i = 0; i < 32-s.length(); ++i){
			if (input < 0 and i == 0){
				output += "1";
			} else {
				output += "0";
			}
		}
		for (int i = (s.length()-1); i>=0; --i) {
			output += s[i];
		}

		// format the output to 4 x 8 bit
		string outputFormatted = "";
		for (int i = 0; i < output.length(); i++)
		{	
			if (i%8 == 0){
				outputFormatted += " ";
				outputFormatted += output[i];
			} else {
				outputFormatted += output[i];
			}
		}

		// output
		cout << "Input is: " << input << endl;
		cout << "Output is:" << outputFormatted.c_str() << endl;
		return 0;
	}
}
