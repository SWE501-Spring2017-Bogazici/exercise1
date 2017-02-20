#include <iostream>

using namespace std;

// Convert decimal value to its binary representation in 16-bits
void toBinary(int num) {
    int n = num;
    int size = 16;
    int array[size];
    int pos = size - 1;

    if (n < 0) {
        n = -n;
    }

    for (int i = 0; i < size; i++) {
        array[i] = 0;
    }

    // Find positive binary representation of num
    while (n > 0) {
        int remainder = n % 2;
        array[pos] = remainder;
        n = n >> 1;
        pos--;
    }

    // Find binary representation of negative num with Two's complement
    if (num < 0) {
        for (int k = 0; k < size; k++) {
            array[k] = 1 - array[k];
        }
        array[size - 1] += 1;

        for (int m = size - 1; m > 1; m--) {
            if (array[m] > 1) {
                array[m] = 0;
                array[m - 1] += 1;
            }
            array[0] = 1;
        }
    }

    // Print the binary representation of num
    cout << "Binary value of " << num << " in " << size << "-bits: ";
    for (int j = 0; j < size; j++) {
        cout << array[j];
    }
    cout << endl;
}

// Output of the program:
// $ g++ DecimalToBinary.cpp -o DecimalToBinary.out
// $ ./DecimalToBinary.out
// Decimal value to convert: 800
// Binary value of 800 in 16-bits: 0000001100100000
int main() {
    int num;
    cout << "Decimal value to convert: ";
    cin >> num;

    toBinary(num);

    return 0;
}
