/*
 * Program: Introduction to Basic C++ Syntax
 * This program demonstrates the use of various data types, `cout` for output, and 
 * basic C++ functionality.
 */

#include <iostream> // Header file for standard input/output operations

using namespace std; // Allows direct usage of names from the standard namespace

int main() {
    // Print statements using `cout` and `endl`
    cout << "Namastey Duniya" << endl; // Outputs text and moves to the next line
    cout << "Mera Naam Aditya Hai" << endl;
    cout << "I'll be The Best Web Developer" << endl;

    // Integer variable
    int a = 123;
    cout << "Integer a: " << a << endl;

    // Character variable
    char b = 'a';
    cout << "Character b: " << b << endl;

    // Boolean variables
    bool bl = true;
    cout << "Boolean bl (true): " << bl << endl;

    bool bla = false;
    cout << "Boolean bla (false): " << bla << endl;

    // Floating-point and double precision variables
    float f = 1.256;
    cout << "Float f: " << f << endl;

    double d = 1.234;
    cout << "Double d: " << d << endl;

    // Size of variables
    cout << "Size of double d: " << sizeof(d) << " bytes" << endl;
    cout << "Size of integer a: " << sizeof(a) << " bytes" << endl;

    return 0; // Indicates successful program termination
}
