/*
An arithmetic array is an array that contains at least two integers and the difference between consecutive integers are equal. For example, [9,10], [3,3,3], and [9,7,5,3] are arithmetic arrays, while [1,3,3], [2,1,2] and [1,2,4] are not arithmetic arrays.
*/
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of Array ";
    cin >> size;
    int arr[size];
    cout << "Enter Array Elements " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Longest Arithmetic Subarray
    int prev = arr[0] - arr[1];
    int length = 2, count = 2;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] - arr[i + 1] == prev)
        {
            count++;
        }
        else
        {
            prev = arr[i] - arr[i + 1];
            count = 2;
        }
        length = max(length, count);
    }
    cout << "Length of Longest Arithmetic Subarray = " << length;
}