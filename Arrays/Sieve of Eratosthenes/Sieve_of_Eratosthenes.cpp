#include <iostream>
using namespace std;

void sievePrime(int n)
{
    int arr[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                arr[j] = 1;
            }
        }
    }

    cout << "Prime in given range are" << endl;
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int n;
    cout << "Enter Range ";
    cin >> n;

    sievePrime(n);
    return 0;
}