#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

// cool method:

// AND the given number with 2^i, eg. 2^3=1000
// and you will get the ith bit of the representation of that number.

// why? because 2^i has 0 for all the digits other than the ith one
// so they AND to 0 whereas the ith digit ANDs to itself.

// Do this for all 32 bits starting from left going to right
// and printing 1 if the result of the AND is true and 0 if not.

void bin(unsigned n)
{
    unsigned i;
    // start with the left-most bit, the 32nd one, up to the right-most bit
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i)? printf("1"): printf("0");
}

int main(void)
{
	int input;
	cout << "Enter an integer: ";
	cin >> input;

	cout << "Binary representation is: ";
	bin(input);
	cout << endl;

}
