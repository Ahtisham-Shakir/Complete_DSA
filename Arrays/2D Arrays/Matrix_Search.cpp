/*
this approach is applicable only if rows and columns are in sorted order
if target is less than the current number then go to previous column else go to the next row
*/

#include <iostream>
using namespace std;

int main()
{
    int n, m, target;
    cout << "Enter Matix order ";
    cin >> n >> m;
    int arr[n][m];

    cout << "Enter " << n << " * " << m << " Matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    cout << "Enter target value ";
    cin >> target;

    // Searching

    int r = 0, c = m - 1, flag = 0;
    while (r < n && c >= 0)
    {
        if (arr[r][c] == target)
        {
            cout << "Element found";
            flag = 1;
            break;
        }
        else if (arr[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (!flag)
    {
        cout << "Element not found ";
    }

    return 0;
}