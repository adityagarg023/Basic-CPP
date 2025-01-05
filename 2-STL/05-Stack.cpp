#include <iostream>
#include <stack> // Include stack header to use STL stack
using namespace std;

int main()
{
    // Declaring a stack of strings
    stack<string> s;

    // Pushing elements onto the stack
    s.push("Aditya"); // "Aditya" is pushed onto the stack
    s.push("Garg");   // "Garg" is pushed onto the stack
    s.push("Great");  // "Great" is pushed onto the stack

    // Printing the top element of the stack
    // The top of the stack contains the last element pushed
    cout << "Top Element -- " << s.top() << endl;

    // Removing the top element from the stack using pop
    // "Great" is removed, and "Garg" becomes the new top element
    s.pop();
    cout << "Top Element -- " << s.top() << endl;

    // Printing the size of the stack
    // The size represents the number of elements currently in the stack
    cout << "Size of Stack -- " << s.size() << endl;

    // Checking if the stack is empty
    // Returns true if the stack is empty, false otherwise
    cout << "Empty or not -- " << s.empty() << endl;

    return 0;
}
