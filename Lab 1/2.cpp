#include <iostream>
using namespace std;

int main()
{
    int x, result;

    cout << "Enter x: ";
    cin >> x;

    result = ((x - 2) * x + 5) * x + 10;

    cout << "f(x) = " << result;

    return 0;
}
