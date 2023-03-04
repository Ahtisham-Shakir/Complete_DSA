/*
Isyana is given the number of visitors at her local theme park on N consecutive days. The number of visitors on the i-th day is vi. A day is record breaking if it satisfies both of the following conditions:
1) The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
2) Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.
Note that the very first day could be a record breaking day!
Please help Isyana find out the number of record breaking days.
*/

#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter Size of array ";
    cin >> size;
    int arr[size + 1];
    cout << "Enter Array Elements " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Record Breaking
    arr[size] = -1;
    int count = 0, prevMax = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > prevMax && arr[i] > arr[i + 1])
        {
            count++;
        }
        prevMax = max(prevMax, arr[i]);
    }
    cout << "Number of record Breaking days are " << count;
    return 0;
}