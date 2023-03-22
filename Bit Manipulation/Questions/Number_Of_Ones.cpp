/*
write a program to count number of ones in binary representation of a number
(n&n-1) has same bits as n except the rightmost set bit (repeatedly perform the above task until it becomes zero)
*/
#include <iostream>
using namespace std;

int numberofones(int n)
{
    int count = 0;
    while (n)
    {
        n = n & n - 1;
        count++;
    }
    return count;
}
int main()
{
    cout << numberofones(19);
    return 0;
}