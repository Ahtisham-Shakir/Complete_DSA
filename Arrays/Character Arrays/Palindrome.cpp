#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter No. of characters ";
    cin >> n;
    char arr[n + 1];
    cout << "Enter Your String ";
    cin >> arr;

    // Palindrome
    int check = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = 0;
            break;
        }
    }

    if (check == 1)
    {
        cout << "Given string is palindrome " << endl;
    }
    else
    {
        cout << "Given string is not palindrome" << endl;
    }

    return 0;
}