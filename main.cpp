#include <iostream>

using namespace std;

int main()
{
    double a, b;
    cout << "Enter A and B: ";
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
<< "A - B = " << a - b << '\n';
    cout << "A * B = " << a * b << '\n';
    cout << "A / B = " << a / b << '\n';
    cout << "A * B = " << a * b <<'\n';
    cout << "A / B = " << a / b <<'\n';
    if (a > b)
        cout << a << '\n';
    else
        cout << b << '\n';
    if (a < b)
        cout << a << '\n';
    else
        cout << b << '\n';

}
