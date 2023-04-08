#include <iostream>
using namespace std;

void towerOfHanoi(int n, char src, char des, char helper)
{

    if (n == 0)
    {
        return;
    }
    towerOfHanoi(n - 1, src, helper, des);
    cout << "Move from " << src << " to " << des << endl;
    towerOfHanoi(n - 1, helper, des, src);
}

int main()
{

    towerOfHanoi(3, 'A', 'B', 'C');
    return 0;
}