/*
write a program to check if a given number is power of 2
if we flip right most setbit(1) and flip all bits after that position then it will be n-1
n = 6 = (0110)         n = 8 = (1000)
n-1 = 5 = (0101)       n-1 = 7 = (0111)
(n & n-1) has same bits as n except the rightmost set bit
0110 & 0101 = 0100         1000 & 0111 = 0000
n has only one set bit and n-1 will have all set bits after that position
*/

#include <iostream>
using namespace std;

bool ispowerof2(int n)
{
    return (n && !(n & n - 1));
}

int main()
{
    cout << ispowerof2(14) << endl;
    cout << ispowerof2(16) << endl;
    return 0;
}