#include <iostream>
using namespace std;

/*
 * This program demonstrates working with arrays and pointers in C++.
 * Topics covered:
 * - Address of arrays and their elements.
 * - Pointer arithmetic with arrays.
 * - Array size and pointer size.
 * - Difference between arrays and pointers.
 * - Character arrays and pointers.
 */

int main()
{
    // Declare and initialize an integer array
    int arr[10] = {23, 122, 41, 67};

    // Printing the address of the first memory block of the array
    cout << "Address of the first memory block (arr): " << arr << endl;

    // Accessing elements of the array
    cout << "Value at arr[0]: " << arr[0] << endl;
    cout << "Address of arr[0]: " << &arr[0] << endl;

    // Demonstrating pointer arithmetic with arrays
    cout << "Value at *arr (same as arr[0]): " << *arr << endl;
    cout << "Value at *arr + 1 (adds 1 to arr[0]): " << *arr + 1 << endl;
    cout << "Value at *(arr + 1) (same as arr[1]): " << *(arr + 1) << endl;
    cout << "Value at *(arr) + 1: " << *(arr) + 1 << endl;
    cout << "Value at arr[2]: " << arr[2] << endl;
    cout << "Value at *(arr + 2): " << *(arr + 2) << endl;

    // Accessing an array element using unconventional syntax
    int i = 3;
    cout << "Value at arr[3] using i[arr]: " << i[arr] << endl;

    // Size calculations for arrays and pointers
    int temp[10] = {1, 2};
    cout << "Size of temp array: " << sizeof(temp) << " bytes" << endl;
    cout << "Size of *temp (dereferenced first element): " << sizeof(*temp) << " bytes" << endl;
    cout << "Size of &temp (address of the array): " << sizeof(&temp) << " bytes" << endl;

    // Pointer to the first element of the array
    int *ptr = &temp[0];
    cout << "Size of *ptr (value pointed by ptr): " << sizeof(*ptr) << " bytes" << endl;
    cout << "Size of ptr (pointer itself): " << sizeof(ptr) << " bytes" << endl;
    cout << "Size of &ptr (address of the pointer): " << sizeof(&ptr) << " bytes" << endl;

    // Address comparison for arrays and pointers
    int a[20] = {1, 2, 3, 5};
    cout << "Address of a[0]: " << &a[0] << endl;
    cout << "Address of array a (&a): " << &a << endl;
    cout << "Array name as address (a): " << a << endl;

    // Pointer to the first element of the array
    int *p = &a[0];
    cout << "Address stored in pointer p: " << p << endl;
    cout << "Value pointed by p: " << *p << endl;
    cout << "Address of pointer p (&p): " << &p << endl;

    // Working with character arrays
    char ch[23] = "abcde";
    cout << "Character array (ch): " << ch << endl;

    // Pointer to the first character of the array
    char *c = &ch[0];
    cout << "Character pointer (c): " << c << endl;

    // Demonstrating pointer with a single character
    char tempo = 'z';
    char *pt = &tempo;
    cout << "Pointer to char (pt): " << pt << endl;

    return 0;
}
