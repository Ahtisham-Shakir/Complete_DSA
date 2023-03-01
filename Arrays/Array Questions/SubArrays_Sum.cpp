/* SubArrays : The continuous part of an array
No. of subArrays of an Array with n elements = nC2 + n = n(n+1)/2

SubSequence : A subsequence is a sequence that can be derived an array by selecting zero or more elements, without changing the order of the remaining elements.
No. of subsequences of an array with n elements = 2pow (n)

Note: every subArray is a subsequence but every subsequence is not a Subarray */
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter Size of array ";
    cin >> size;
    int arr[size];
    cout << "Enter Array Elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Subarray Sum
    for (int i = 0; i < size; i++)
    {
        int sum = 0;
        for (int j = i; j < size; j++)
        {
            sum = sum + arr[j];
            cout << sum << endl;
        }
    }
}