#include <iostream>
#include <cmath>
using namespace std;

double f(double x)
{
    return x*x*x - 9*x + 1;
}

int main()
{
    double a, b, c;

    cout << "Enter a and b: ";
    cin >> a >> b;

    while (fabs(b - a) > 0.0005)
    {
        c = (a + b) / 2;

        if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    }

    cout << "Root = " << c;

    return 0;
}
