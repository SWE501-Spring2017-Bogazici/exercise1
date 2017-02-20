#include <iostream>

using namespace std;

// decimal_to_binary.cpp
// Output of -100 in 8 bits using Intellij CLion:
// $ g++ decimal_to_binary.cpp -o decimal_to_binary.out
// $ ./decimal_to_binary.out
// Binary value of -100 in 8-bits: 10011100
int main() {
    int num = -100;
    int n = num;
    int array[8] = {0};
    int size = sizeof(array) / sizeof(array[0]);
    int pos = size - 1;

    if (n < 0) {
        n = -n;
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

    return 0;
}
