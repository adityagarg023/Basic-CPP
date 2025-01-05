#include <iostream>
#include <vector> // Include the vector header for using STL vectors
using namespace std;

int main()
{
    // Declaring an empty vector v using STL
    vector<int> v;

    // Declaring a vector 'a' of size 5, with all elements initialized to 1
    vector<int> a(5, 1);

    // Declaring a vector 'last' that copies all elements from vector 'a'
    vector<int> last(a);

    // Printing elements of vector 'last' using a range-based for loop
    cout << "Printing Last -- ";
    for (int i : last) // i iterates over all elements in 'last'
    {
        cout << i << " ";
    }
    cout << endl;

    // Capacity of vector: This shows the allocated storage, NOT the number of elements
    cout << "Capacity -- " << v.capacity() << endl;

    // Adding elements to the vector using push_back
    v.push_back(1); // Adds 1 to the vector
    cout << "Capacity -- " << v.capacity() << endl;

    v.push_back(2); // Adds 2 to the vector
    cout << "Capacity -- " << v.capacity() << endl;

    v.push_back(3); // Adds 3 to the vector
    cout << "Capacity -- " << v.capacity() << endl;

    // Size of the vector: This shows the number of elements in the vector
    cout << "Size -- " << v.size() << endl;

    // Accessing an element at a specific index using at()
    cout << "Element at 2nd Index -- " << v.at(2) << endl;

    // Accessing the first and last elements of the vector
    cout << "Front -- " << v.front() << endl;
    cout << "Back -- " << v.back() << endl;

    // Printing vector elements before popping the last element
    cout << "Before pop -- ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // Removing the last element using pop_back
    v.pop_back();

    // Printing vector elements after popping the last element
    cout << "After pop -- ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // Checking size before clearing the vector
    cout << "Before Clearing Size -- " << v.size() << endl;

    // Clearing all elements in the vector (size becomes 0, but capacity remains unchanged)
    v.clear();
    cout << "After Clearing Size -- " << v.size() << endl;

    return 0;
}
