#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // Declaring a vector of integers
    vector<int> v;

    // Adding elements to the vector
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    // Using binary_search to check if an element is present in the sorted vector
    cout << "Is 6 present? -- " << binary_search(v.begin(), v.end(), 6) << endl;

    // Finding the position of the first element not less than 6 (lower_bound)
    cout << "Lower bound of 6 -- " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;

    // Finding the position of the first element greater than 4 (upper_bound)
    cout << "Upper bound of 4 -- " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    // Demonstrating basic utility functions: max, min, and swap
    int a = 3;
    int b = 5;
    cout << "Max of 3 and 5 -- " << max(a, b) << endl;
    cout << "Min of 3 and 5 -- " << min(a, b) << endl;

    // Swapping the values of 'a' and 'b'
    swap(a, b);
    cout << "After swapping, a = " << a << endl;

    // Reversing a string using reverse function
    string s = "aabcd";
    reverse(s.begin(), s.end());
    cout << "Reversed string -- " << s << endl;

    // Rotating the vector (elements shifted to the left by one position)
    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "After rotating the vector:" << endl;
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    // Sorting the vector in ascending order
    sort(v.begin(), v.end());
    cout << "Sorted vector:" << endl;
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
