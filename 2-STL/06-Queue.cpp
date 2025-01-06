#include <iostream>
#include <queue> // Include queue header to use STL queue
using namespace std;

int main()
{
    // Declaring a queue of strings
    queue<string> q;

    // Adding elements to the queue
    q.push("Aditya"); // "Aditya" is added to the queue
    q.push("Garg");   // "Garg" is added to the queue
    q.push("Great");  // "Great" is added to the queue

    // Accessing the first element (front of the queue)
    // The first element is the one added earliest (FIFO principle)
    cout << "First element -- " << q.front() << endl;

    // Printing the size of the queue before popping an element
    cout << "Size before pop -- " << q.size() << endl;

    // Removing the first element from the queue using pop
    // "Aditya" is removed, and "Garg" becomes the new first element
    q.pop();

    // Accessing the first element after popping
    cout << "First element -- " << q.front() << endl;

    // Printing the size of the queue after popping an element
    cout << "Size after pop -- " << q.size() << endl;

    return 0;
}
