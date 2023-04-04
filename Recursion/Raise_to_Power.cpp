#include <iostream>
using namespace std;

int raiseToPower(int n, int p)
{

    if (p == 0)
    {
        return 1;
    }
    int prevPow = raiseToPower(n, p - 1);
    return n * prevPow;
}

int main()
{
    int n, p;
    cout << "Enter Number and raise to power ";
    cin >> n >> p;
    cout << "Answer " << raiseToPower(n, p);
    return 0;
}