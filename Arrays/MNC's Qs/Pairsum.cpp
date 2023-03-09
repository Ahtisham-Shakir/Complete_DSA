/*
Take two pointers low and high add both two elements present at that index if resultant sum is less than given sum then increment low else if resultant sum is greater than given sum then decrement high
(the above approach is only applicable on sorted array)
*/
#include <iostream>
using namespace std;

bool pairsum(int arr[], int n, int k)
{
    int low = 0, high = n - 1;
    while (low < high)
    {
        int res = arr[low] + arr[high];
        if (res == k)
        {
            return true;
        }
        else if (res < k)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
    return false;
}

int main()
{
    int n, k;
    cout << "Enter size of array ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements " << endl;
    for (int i; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter given sum ";
    cin >> k;

    cout << pairsum(arr, n, k);
    return 0;
}