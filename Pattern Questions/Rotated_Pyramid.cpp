// Inverted Pyramid with 180 degree rotation

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Pyramid Height ";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j >= i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}