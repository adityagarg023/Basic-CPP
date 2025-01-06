#include <iostream>
#include <queue> // Include queue header to use STL priority_queue
using namespace std;

int main()
{
    // Declaring a max heap (default behavior of priority_queue)
    priority_queue<int> max;

    // Declaring a min heap
    // Uses a comparator 'greater<int>' to reverse the order
    priority_queue<int, vector<int>, greater<int>> min;

    // Pushing elements into the max heap
    max.push(1); // Inserts 1
    max.push(3); // Inserts 3
    max.push(2); // Inserts 2
    max.push(0); // Inserts 0

    // Printing the size of the max heap
    cout << "size -- " << max.size() << endl;

    // Printing elements in the max heap
    // Elements are stored in descending order (largest element at the top)
    int n = max.size();
    for (int i = 0; i < n; i++)
    {
        cout << max.top() << " "; // Access the top element (largest)
        max.pop();                // Remove the top element
    }
    cout << endl;

    // Pushing elements into the min heap
    min.push(5); // Inserts 5
    min.push(1); // Inserts 1
    min.push(0); // Inserts 0
    min.push(4); // Inserts 4
    min.push(3); // Inserts 3

    // Printing elements in the min heap
    // Elements are stored in ascending order (smallest element at the top)
    int m = min.size();
    for (int i = 0; i < m; i++)
    {
        cout << min.top() << " "; // Access the top element (smallest)
        min.pop();                // Remove the top element
    }
    cout << endl;

    // Checking if the min heap is empty
    cout << "empty or not --" << min.empty() << endl;

    return 0;
}
