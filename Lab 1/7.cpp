#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double f(double x)
{
    return x*x*x - x + 2;
}
int main()
{
    double a, b, c;
    cout << "Enter a and b: ";
    cin >> a >> b;
    do
    {
        c = (a*f(b) - b*f(a)) / (f(b) - f(a));

        if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    } while (fabs(f(c)) > 0.0005);

    cout << fixed << setprecision(3);
    cout << "Root = " << c;

    return 0;
}
