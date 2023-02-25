#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0, end = size, mid;
    while (start <= end)
    {
        mid = start + end / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int size, key;
    cout << "Enter size of array ";
    cin >> size;
    int arr[size];
    cout << "Enter Array values ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter value to search ";
    cin >> key;
    int result = binarySearch(arr, size, key);
    cout << result;
    return 0;
}