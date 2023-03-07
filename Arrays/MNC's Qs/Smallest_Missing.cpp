/*
you are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Size of arary ";
    cin >> n;
    int arr[n];
    cout << "Enter Elements of array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    const int N = 1e6;
    bool check[N];
    for (int i = 0; i < N; i++)
    {
        check[i] = 0; // false
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            check[arr[i]] = 1; // true
        }
    }

    int ans = -1;
    for (int i = 0; i < N; i++)
    {
        if (check[i] == false)
        {
            ans = i;
            break;
        }
    }
    cout << "Answer " << ans << endl;
}