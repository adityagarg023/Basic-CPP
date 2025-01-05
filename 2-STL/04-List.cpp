#include <iostream>
#include <list> // Include list header for using STL list
using namespace std;

int main()
{
    // Declaring a list of integers
    list<int> l;

    // Adding an element to the end of the list using push_back
    l.push_back(1);

    // Adding an element to the front of the list using push_front
    l.push_front(2);

    // Declaring another list 'n' with 5 elements, each initialized to 100
    list<int> n(5, 100);

    // Printing elements of the list 'n' using a range-based for loop
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;

    // Copying all elements of list 'l' into a new list 'm'
    list<int> m(l);

    // Printing elements of the copied list 'm'
    for (int i : m)
    {
        cout << i << " ";
    }
    cout << endl;

    // Printing elements of the original list 'l'
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    // Erasing the first element of the list 'l'
    l.erase(l.begin());
    cout << "After erase:" << endl;

    // Printing elements of list 'l' after erasing the first element
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    // Getting the size of the list 'l'
    cout << "Size of list -- " << l.size() << endl;

    return 0;
}
