#include <iostream>
using namespace std;

int first(int arr[], int size, int n, int i)
{
    if (i == size)
    {
        return -1;
    }
    if (arr[i] == n)
    {
        return i;
    }
    return first(arr, size, n, i + 1);
}
int last(int arr[], int size, int n, int i)
{
    if (i == size)
    {
        return -1;
    }
    int restArr = last(arr, size, n, i + 1);
    if (restArr != -1)
    {
        return restArr;
    }
    if (arr[i] == n)
    {
        return i;
    }
    return -1;
}

int main()
{
    int arr[] = {4, 2, 1, 2, 5, 2, 7};
    cout << "First occurence " << first(arr, 7, 2, 0) << endl;
    cout << "last occurence " << last(arr, 7, 2, 0);
    return 0;
}