// main.cpp
#include <iostream>
#include "question3.h"

using namespace std;

int main()
{
    char again = 'y';

    while (again == 'y' || again == 'Y')
    {
        double mass, velocity;

        cout << "Enter the object's mass in kilograms: ";
        cin >> mass;

        cout << "Enter the object's velocity in meters per second: ";
        cin >> velocity;

        if (mass <= 0 || velocity <= 0)
        {
            cout << "Invalid input. Mass and velocity must be positive numbers.\n";
            continue;
        }

        double kinetic_energy = get_kinetic_energy(mass, velocity);

        cout.setf(ios::fixed);
        cout.precision(2);

        cout << "The object's kinetic energy is: " 
             << kinetic_energy << " Joules" << endl;

        cout << "Do you want to calculate again? (y/n): ";
        cin >> again;
    }

    cout << "Goodbye!\n";
    return 0;
}