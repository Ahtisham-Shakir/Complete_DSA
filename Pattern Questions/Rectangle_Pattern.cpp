#include <iostream>
using namespace std;
int main()
{
    int rows, col;
    cout << "Enter no of rows: ";
    cin >> rows;
    cout << "Enter no of colums: ";
    cin >> col;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    return 0;
}
