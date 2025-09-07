#include <iostream>
using namespace std;

int main()
{
    int a, b;
    
    // Prompting user to enter the first number
    cout << "Enter the value of a -- ";
    cin >> a;
    
    // Prompting user to enter the second number
    cout << "Enter the value of b -- ";
    cin >> b;

    char op;
    
    // Prompting user to enter the operation to perform
    cout << "Enter the operation -- ";
    cin >> op;

    // Using a switch statement to perform the appropriate operation
    switch (op)
    {
    case '+': // Addition case
        cout << "Your solution is " << a + b;
        break;

    case '-': // Subtraction case
        cout << "Your solution is " << a - b;
        break;

    case '*': // Multiplication case
        cout << "Your solution is " << a * b;
        break;

    case '/': // Division case
        // Note: Make sure b is not zero before performing division
        cout << "Your solution is " << a / b;
        break;

    case '%': // Modulus case
        // Note: Modulus operator works only for integers
        cout << "Your solution is " << a % b;
        break;

    default: // Handling invalid operations
        cout << "Enter a valid operation";
        break;
    }

    return 0;
}
