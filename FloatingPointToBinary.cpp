#include <iostream>


using namespace std;

/*
 * Convert floating point's fractional part to binary in 8-bits
 * without taking care of the signed bit
 */
string fractionalPartToBinary(float num) {
    string binaryStr;
    int bitCount = 8;

    if (num >= 1) {
        cout << "Fractional part should be lower than 1" << endl;
    }

    for (int i = 0; i < bitCount; i++) {
        num *= 2;
        if (num >= 1) {
            binaryStr += "1";
            num--;
        } else {
            binaryStr += "0";
        }
    }
    return binaryStr;
}

/*
 * Convert integer value to binary
 */
string integerPartToBinary(int n) {
    long long binary = 0;
    int remainder, i = 1;

    while (n != 0) {
        remainder = n % 2;
        n /= 2;
        binary += remainder * i;
        i *= 10;
    }
    return to_string(binary);
}

/*
 * The program converts positive floating point number to
 * its binary representation with integer and 8 bits fractional
 * part
 *
 * ex. Output:
 *  Enter a positive floating number: 90.625
 *  Binary of 90.625 --> 1011010.10100000
 */
int main() {
    float num;
    string binary;
    cout << "Enter a positive floating number: ";
    cin >> num;

    if (num < 0) {
        cout << "Number should be higher than 0!" << endl;
        return 0;
    }

    int integerPart = (int) num;
    float fractionalPart = num - integerPart;

    binary = integerPartToBinary(integerPart) + "." + fractionalPartToBinary(fractionalPart);
    cout << "Binary of " << num << " --> " << binary << endl;
    return 0;
}
