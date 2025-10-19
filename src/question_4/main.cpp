// main.cpp
#include <iostream>
#include "question4.h"

using namespace std;

int main()
{
    char again = 'y';

    while (again == 'y' || again == 'Y')
    {
        int num;

        cout << "Enter an integer between 1 and 512: ";
        cin >> num;

        if (num < 1 || num > 512)
        {
            cout << "Invalid input. Please enter a number between 1 and 512.\n";
            continue;
        }

        string hexValue = decimal_to_hex(num);
        cout << "The hexadecimal value of " << num << " is: " << hexValue << endl;

        cout << "Do you want to convert another number? (y/n): ";
        cin >> again;
    }

    cout << "Goodbye!\n";
    return 0;
}
