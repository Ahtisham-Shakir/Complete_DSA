/*
nonwrapsum = sum available in linear array

wrapsum = sum available in circular subarray
Sum of non contributing elements = reverse the sign of all the elements in the array apply kadane's algorithm resultant sum will be the sum of non contributing elements

max subarray sum = Total Sum of array - ( - Sum of non contributing elements)
*/

#include <iostream>
using namespace std;

int kadane(int arr[], int n)
{
    int currSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

int main()
{
    int n;
    cout << "Enter size of array ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int wrapsum;
    int nonWrapsum;
    nonWrapsum = kadane(arr, n);

    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
        arr[i] = -arr[i];
    }
    wrapsum = totalSum + kadane(arr, n);
    cout << "Maximum " << max(wrapsum, nonWrapsum);

    return 0;
}