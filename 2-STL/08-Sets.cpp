#include <iostream>
#include <set>
using namespace std;

int main()
{
    // A set in C++ stores unique elements (no duplicates allowed)
    // Elements in a set are automatically sorted in ascending order
    set<int> s;

    // Inserting elements into the set (duplicate values will not be stored)
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    // Printing elements of the set (automatically sorted)
    cout << "Elements of the set:" << endl;
    for (auto i : s)
        cout << i << endl;

    cout << endl;

    // Erasing the second element from the set using an iterator
    set<int>::iterator it = s.begin();
    it++; // Move to the second element
    s.erase(it); // Remove the second element

    // Printing the set after erasing an element
    cout << "After erasing the second element:" << endl;
    for (auto i : s)
        cout << i << endl;

    cout << endl;

    // Using count() to check if a specific value exists in the set
    cout << "7 is present or not -- " << s.count(7) << endl; // Returns 0 (not present)
    cout << endl;

    // Finding an element in the set using find()
    set<int>::iterator itr = s.find(5); // Returns an iterator to the element if found
    cout << "Value at itr -- " << *itr << endl;

    // Printing all elements from the found position to the end of the set
    cout << "Elements from 5 to the end:" << endl;
    for (auto it = itr; it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
