#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double f(double x)
{
    return x*x*x - 6*x + 4;
}

void bisection(double a, double b)
{
    double c;

    while (fabs(b - a) > 0.0005)
    {
        c = (a + b) / 2;

        if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    }

    cout << fixed << setprecision(3) << c << endl;
}

int main()
{
    cout << "Roots are:" << endl;

    bisection(-3, -2);
    bisection(0, 1);
    bisection(2, 3);

    return 0;
}
