#i#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;
    int n;

    cin >> x >> n;

    int d = floor(log10(fabs(x))) + 1;
    int p = n - d;

    double a = x * pow(10, p);

    if (a - floor(a) > 0.5)
        a = ceil(a);
    else if (a - floor(a) < 0.5)
        a = floor(a);
    else
    {
        if ((int)floor(a) % 2 == 0)
            a = floor(a);
        else
            a = ceil(a);
    }

    cout << a / pow(10, p);

    return 0;
}
