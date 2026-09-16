#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double f(double x)
{
    return x*x*x - 6*x + 4;
}

double df(double x)
{
    return 3*x*x - 6;
}

int main()
{
    double x, x1;

    cout << "Enter initial value: ";
    cin >> x;

    do
    {
        x1 = x - f(x) / df(x);
        x = x1;

    } while (fabs(f(x)) > 0.0005);

    cout << fixed << setprecision(3);
    cout << "Root = " << x;

    return 0;
}
