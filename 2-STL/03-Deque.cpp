#include <iostream>
#include <deque> // Include deque header for using STL deque
using namespace std;

int main()
{
    // Declaring a deque (double-ended queue)
    deque<int> d;

    // Adding an element at the end using push_back
    d.push_back(1);

    // Adding an element at the beginning using push_front
    d.push_front(2);

    // Printing the elements of the deque using a range-based for loop
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // Uncomment the following lines to see how elements are removed:
    // To remove an element from the beginning
    // d.pop_front();

    // To remove an element from the end
    // d.pop_back();

    // Accessing an element at a specific index using at()
    cout << "Print First Index Element -- " << d.at(1) << endl;

    // Accessing the first element of the deque using front()
    cout << "Front -- " << d.front() << endl;

    // Accessing the last element of the deque using back()
    cout << "Back -- " << d.back() << endl;

    // Checking if the deque is empty
    cout << "Empty or Not -- " << d.empty() << endl;

    // Getting the size of the deque
    cout << "Before Erase -- " << d.size() << endl;

    // Erasing elements from the deque
    // This removes elements from the beginning to the second position
    d.erase(d.begin(), d.begin() + 1);

    // Printing the size of the deque after erasing
    cout << "After Erase -- " << d.size() << endl;

    // Printing the elements of the deque after erasing
    for (int i : d)
    {
        cout << i << " ";
    }

    return 0;
}
