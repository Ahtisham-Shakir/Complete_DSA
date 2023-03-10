#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of characters ";
    cin >> n;
    cin.ignore();

    char arr[n + 1];
    cout << "Enter Your String ";
    cin.getline(arr, n);
    cin.ignore();

    int currLength = 0;
    int maxLength = 0;
    int st = 0;
    int i = 0;

    while (true)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            maxLength = max(maxLength, currLength);
            currLength = 0;
        }
        else
        {
            currLength++;
            if (currLength == 1)
            {
                st = i;
            }
        }
        if (arr[i] == '\0')
            break;
        i++;
    }
    cout << "Maximun word length " << maxLength << endl;
    cout << "Your word is ";
    for (int i = 0; i < maxLength; i++)
    {
        cout << arr[i + st];
    }
    return 0;
}