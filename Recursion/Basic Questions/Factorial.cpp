#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{

    int n;
    cout << "Enter Number ";
    cin >> n;
    cout << "Answer " << factorial(n);
    return 0;
}