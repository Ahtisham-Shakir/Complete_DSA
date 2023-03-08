/*
Find maximum sum of all the Subarrays in an array

Solution:
cumulative sum approach:     -1 (-1+4) (3+7) (10+2)
Array                        -1 4 7 2
Cumulative sum arary         -1 3 10 12
Answer will be obtain by (ending point sum) - (Starting point cumulative sum) = subarray sum
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter array size ";
    cin >> n;
    int arr[n];
    cout << "Enter Array elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // =============== Cumulative Sum Approach ============
    // int currSum[n + 1];
    // currSum[0] = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     currSum[i] = currSum[i - 1] + arr[i - 1];
    // }

    // int maxSum = INT_MIN;
    // for (int i = 1; i <= n; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < i; j++)
    //     {
    //         sum = currSum[i] - currSum[j];
    //         maxSum = max(maxSum, sum);
    //     }
    // }

    // cout << "Maximum " << maxSum;

    // ============= Kadane's Algorithm Approach ============
    // our max sum will be the contiguous positive values. but not the negative values
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
    cout << "Maximun " << maxSum;

    return 0;
}
