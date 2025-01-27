#include <iostream>
using namespace std;

/*
 * This program demonstrates the use of pointers in C++.
 * Topics covered:
 * - Address and dereferencing using pointers.
 * - Pointer size and type.
 * - Modifying variables using pointers.
 * - Copying pointers and pointer arithmetic.
 */

int main()
{
    // Initialize an integer variable
    int num = 5;
    cout << "Value of num: " << num << endl;

    // Address of num
    cout << "Address of num: " << &num << endl;

    // Create a pointer to an integer and assign it the address of num
    int *ptr = &num;
    cout << "Value pointed by ptr: " << *ptr << endl;
    cout << "Address stored in ptr: " << ptr << endl;

    // Create a double variable and a pointer to it
    double d = 4.3;
    double *p2 = &d;
    cout << "Value pointed by p2: " << *p2 << endl;
    cout << "Address stored in p2: " << p2 << endl;

    // Size of dereferenced pointer and pointer itself
    cout << "Size of integer (dereferenced ptr): " << sizeof(*ptr) << " bytes" << endl;
    cout << "Size of integer pointer (ptr): " << sizeof(ptr) << " bytes" << endl;
    cout << "Size of double pointer (p2): " << sizeof(p2) << " bytes" << endl;

    /*
     * Bad practice: Declaring a pointer without initializing it (commented out).
     * int *p;
     * cout << *p << endl; // This will result in undefined behavior.
     */

    // Properly initialize a pointer to nullptr (safe practice)
    int *p1 = nullptr;

    // Assign the address of a variable to the pointer
    int i = 5;
    p1 = &i;
    cout << "Value pointed by p1: " << *p1 << endl;
    cout << "Address stored in p1: " << p1 << endl;

    // Modify the value of i through the pointer
    i--; // Decrement i
    cout << "Value pointed by p1 after i is decremented: " << *p1 << endl;

    *p1 += 6; // Increment the value of i by 6
    cout << "Updated value of i: " << i << endl;

    // Copying a pointer
    int *q = p1;
    cout << "Addresses stored in p1 and q: " << p1 << " - " << q << endl;
    cout << "Values pointed by p1 and q: " << *p1 << " - " << *q << endl;

    // Pointer arithmetic
    int a = 7;
    int *t = &a;

    // Increment the value of a through the pointer
    cout << "Incremented value of a (via *t): " << ++*t << endl;

    // Pointer remains unchanged after modifying the value it points to
    cout << "Address stored in t: " << t << endl;

    // Incrementing the pointer itself (moves to the next memory location based on the type size)
    cout << "Address after incrementing t: " << ++t << endl;

    return 0;
}
