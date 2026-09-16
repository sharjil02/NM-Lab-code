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
    double x, r;
    x = 1;

    for(int i = 0; i < 20; i++)
        x = x - f(x) / df(x);

    r = x;
    double b = r;
    double c = r*b - 6;
    double d = b*b - 4*c;
    double root2 = (-b + sqrt(d)) / 2;
    double root3 = (-b - sqrt(d)) / 2;
    cout << fixed << setprecision(3);
    cout << "Root 1 = " << r << endl;
    cout << "Root 2 = " << root2 << endl;
    cout << "Root 3 = " << root3 << endl;
    return 0;
}
