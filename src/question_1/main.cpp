// main.cpp
#include <iostream>
#include "question1.h"
using namespace std;

int main()
{
    char again = 'y';

    while (again == 'y' || again == 'Y')
    {
        int num;

        cout << "Enter a number (1-15): ";
        cin >> num;

        if (num < 1 || num > 15)
        {
            cout << "Invalid input. Please enter a number between 1 and 15.\n";
            continue;
        }

        int fibValue = get_fib_number(num);
        cout << "Fibonacci number for " << num << " is: " << fibValue << endl;

        cout << "Do you want to calculate another? (y/n): ";
        cin >> again;
    }

    cout << "Goodbye!\n";
    return 0;
}
