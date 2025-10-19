#include <iostream>
#include "question2.h"
using namespace std;

int main()
{
    char again = 'y';

    while (again == 'y' || again == 'Y')
    {
        double celsius;
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;

        double fahrenheit = get_fahrenheit(celsius);

        cout.setf(ios::fixed);
        cout.precision(1);
        cout << celsius << "°C = " << fahrenheit << "°F" << endl;

        cout << "Do you want to convert another temperature? (y/n): ";
        cin >> again;
    }

    cout << "Goodbye!\n";
    return 0;
}