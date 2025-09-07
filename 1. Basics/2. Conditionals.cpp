/*
 * Program: Comparing Two Numbers
 * This program takes two integer inputs and compares them to determine
 * whether the first number is greater than, smaller than, or equal to the second number.
 */

#include <iostream> // Header file for standard input/output operations
using namespace std;

int main() {
    int a, b;

    // Prompt the user for input
    cout << "Enter the value of a: ";
    cin >> a; // Input the first number
    cout << "Enter the value of b: ";
    cin >> b; // Input the second number

    // Compare the two numbers
    if (a > b) {
        cout << "a is greater than b" << endl;
    } else {
        if (a < b) {
            cout << "a is smaller than b" << endl;
        } else {
            cout << "a is equal to b" << endl;
        }
    }

    return 0; // Indicates successful program termination
}
