#include <iostream>
using namespace std;

int main()
{
    int n, m, k;
    cout << "Enter rows and columns of array ";
    cin >> n >> m;
    int arr[n][m];

    cout << "Enter " << n << "*" << m << " Matrix values " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Enter element to search ";
    cin >> k;

    // Searching
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == k)
            {
                flag = true;
                cout << "Element is present at " << i + 1 << "," << j + 1;
                break;
            }
        }
    }
    if (!flag)
    {
        cout << "Element not found ";
    }
    return 0;
}