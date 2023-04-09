/*
Given a 2*n board and tiles of size 2*1 count the number of ways to tile the given board using these tiles

this code is similar to fibonacci
*/
#include <iostream>
using namespace std;

int count(int n)
{

    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return (count(n - 1) + count(n - 2));
}
int main()
{
    cout << count(4);
    return 0;
}