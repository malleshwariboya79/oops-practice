// Q4. Read three integers and print the largest number.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter a b c values...." << endl;
    cin >> a >> b >> c;
    if (a >= b && a >= c)
    {
        cout << a;
    }
    else if (b >= a && b >= c)
    {
        cout << b;
    }
    else
    {
        cout << c;
    }
    return 0;
}
