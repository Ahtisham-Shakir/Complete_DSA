/*
swap only the upper elments of the diagonal
solution swap (arr[i][j],arr[j][i])
*/

#include <iostream>
using namespace std;

int main()
{
    int n, m;
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

    // Transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    cout << "The Transpose of Matrix is " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}