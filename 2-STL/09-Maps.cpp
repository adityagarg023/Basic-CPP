#include <iostream>
#include <map>
using namespace std;

int main()
{
    // Declaring a map where an integer key maps to a string value
    map<int, string> m;

    // Maps in C++ automatically store elements in sorted order based on keys
    m[1] = "aditya";  // Inserting key-value pair (1, "aditya")
    m[8] = "king";    // Inserting key-value pair (8, "king")
    m[2] = "garg";    // Inserting key-value pair (2, "garg")
    m.insert({5, "chess"}); // Alternative way to insert key-value pair (5, "chess")

    // Displaying the map before erasing any elements
    cout << "Before erase:" << endl;
    for (auto i : m) {
        cout << i.first << " " << i.second << endl; // Print key and corresponding value
    }

    // Checking if the key '8' is present in the map
    cout << "Is 8 present? -- " << m.count(8) << endl; // Returns 1 if key exists, 0 otherwise

    // Erasing the element with key '8'
    m.erase(8);

    // Displaying the map after erasing the key '8'
    cout << "After erase:" << endl;
    for (auto i : m) {
        cout << i.first << " " << i.second << endl;
    }

    // Finding the iterator pointing to the element with key '5'
    auto it = m.find(5);

    // Iterating from the found element to the end of the map
    cout << "Keys from 5 to the end:" << endl;
    for (auto i = it; i != m.end(); i++) {
        cout << (*i).first << endl; // Print only the keys
    }

    return 0;
}
#include <iostream>
#include <map>
using namespace std;

int main()
{
    // Declaring a map where an integer key maps to a string value
    map<int, string> m;

    // Maps in C++ automatically store elements in sorted order based on keys
    m[1] = "aditya";  // Inserting key-value pair (1, "aditya")
    m[8] = "king";    // Inserting key-value pair (8, "king")
    m[2] = "garg";    // Inserting key-value pair (2, "garg")
    m.insert({5, "chess"}); // Alternative way to insert key-value pair (5, "chess")

    // Displaying the map before erasing any elements
    cout << "Before erase:" << endl;
    for (auto i : m) {
        cout << i.first << " " << i.second << endl; // Print key and corresponding value
    }

    // Checking if the key '8' is present in the map
    cout << "Is 8 present? -- " << m.count(8) << endl; // Returns 1 if key exists, 0 otherwise

    // Erasing the element with key '8'
    m.erase(8);

    // Displaying the map after erasing the key '8'
    cout << "After erase:" << endl;
    for (auto i : m) {
        cout << i.first << " " << i.second << endl;
    }

    // Finding the iterator pointing to the element with key '5'
    auto it = m.find(5);

    // Iterating from the found element to the end of the map
    cout << "Keys from 5 to the end:" << endl;
    for (auto i = it; i != m.end(); i++) {
        cout << (*i).first << endl; // Print only the keys
    }

    return 0;
}
