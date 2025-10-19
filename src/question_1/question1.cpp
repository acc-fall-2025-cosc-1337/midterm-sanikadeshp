#include "question1.h"

// This function is just for the test framework
bool test_config()
{
    return true;
}

// Returns the nth Fibonacci number
int get_fib_number(int n)
{
    if (n <= 1)
        return n;

    int a = 0, b = 1, fib = 0;

    for (int i = 2; i <= n; ++i)
    {
        fib = a + b;
        a = b;
        b = fib;
    }

    return fib;
}
