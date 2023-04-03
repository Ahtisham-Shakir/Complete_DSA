/*
Eclid Algorithm
if we do a%b the remainder would be the gcd of b and remainder and so on.
*/

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}

int main()
{

    int a, b;
    cout << "Enter Two numbers ";
    cin >> a >> b;

    cout << "Greatest Commom Divisor is " << gcd(a, b)
         << endl;
    return 0;
}