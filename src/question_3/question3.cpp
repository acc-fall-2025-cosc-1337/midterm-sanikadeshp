#include "question3.h"

// Used by automated test setup
bool test_config()
{
    return true;
}

// Calculates kinetic energy (KE = 0.5 * m * v^2)
double get_kinetic_energy(double m, double v)
{
    return 0.5 * m * v * v;
}