#include <iostream>
#include <array> // Include the array header for using STL array
using namespace std;

int main()
{
    // Declaring an array in the general way (traditional C++ array)
    int basic[3] = {1, 2, 3};

    // Declaring the array using STL
    // Syntax: array<type, size> name = {elements}
    array<int, 4> a = {1, 2, 3, 4};

    // Using the size() function to get the size of the STL array
    int size = a.size();

    // Loop to print all the elements of the STL array
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " "; // Accessing elements using array indexing
    }
    cout << endl;

    // Accessing an element at a specific index using the at() function
    cout << "Element at 2nd index -- " << a.at(2) << endl;

    // Checking if the array is empty using the empty() function
    // This returns true (1) if the array is empty, otherwise false (0)
    cout << "Empty or not -- " << a.empty() << endl;

    // Accessing the first element of the array using the front() function
    cout << "First element -- " << a.front() << endl;

    // Accessing the last element of the array using the back() function
    cout << "Last element -- " << a.back() << endl;

    return 0;
}
