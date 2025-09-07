// Q2. Read an integer and check whether it is even or odd.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a Integer Number: " << endl;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "This is Even Number..." << endl;
    }
    else
    {
        cout << " This is Odd Number..." << endl;
    }

    return 0;
}