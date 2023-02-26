#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "How many element want to enter? ";
    cin >> n;
    int arr[n];
    cout << "Enter Elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Selection Sort
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    // Print array
    printArr(arr, n);
}