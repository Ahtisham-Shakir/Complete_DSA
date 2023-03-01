#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter Size of Array ";
    cin >> size;
    int arr[size];
    int mx = INT32_MIN;

    cout << "Enter Array values ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        mx = max(mx, arr[i]);
        cout << "Max till " << i << " is " << mx << endl;
    }
}