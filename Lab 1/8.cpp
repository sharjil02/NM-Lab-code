#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = -5, c = 10, d = -8;
    int root = 2;

    int q1, q2, q3;

    q1 = a;
    q2 = b + q1 * root;
    q3 = c + q2 * root;

    cout << "q(x) = " << q1 << "x^2 + "
         << q2 << "x + " << q3;

    return 0;
}
