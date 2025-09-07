#include <iostream>
using namespace std;

int main() {
    int a; // Variable to store the first number
    int b; // Variable to store the second number

    // Input for 'a'
    cout << "a is ";
    cin >> a;

    // Input for 'b'
    cout << "b is ";
    cin >> b;

    // Demonstrating bitwise AND operator
    cout << "Bitwise AND operator --> " << (a & b) << endl;

    // Demonstrating bitwise OR operator
    cout << "Bitwise OR operator --> " << (a | b) << endl;

    // Demonstrating bitwise NOT operator
    cout << "Bitwise NOT operator (a) --> " << (~a) << endl;
    cout << "Bitwise NOT operator (b) --> " << (~b) << endl;

    // Demonstrating bitwise XOR operator
    cout << "Bitwise XOR operator --> " << (a ^ b) << endl;

    // Demonstrating left shift operator
    cout << "Bitwise Left Shift operator (a << 2) --> " << (a << 2) << endl;
    cout << "Bitwise Left Shift operator (b << 1) --> " << (b << 1) << endl;

    // Demonstrating right shift operator
    cout << "Bitwise Right Shift operator (a >> 1) --> " << (a >> 1) << endl;
    cout << "Bitwise Right Shift operator (b >> 2) --> " << (b >> 2) << endl;

    // Demonstrating pre and post increment operators
    cout << "Pre-Increment Operator (a) --> " << (++a) << endl;  // Increment before use
    cout << "Post-Increment Operator (a) --> " << (a++) << endl; // Use then increment

    // Demonstrating pre and post decrement operators
    cout << "Post-Decrement Operator (a) --> " << (a--) << endl; // Use then decrement
    cout << "Pre-Decrement Operator (a) --> " << (--a) << endl;  // Decrement before use

    return 0;
}
