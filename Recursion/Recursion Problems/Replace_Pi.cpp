#include <iostream>
#include <string>
using namespace std;

void pi(string str)
{
    if (str == "")
    {
        return;
    }
    if (str[0] == 'p' && str[1] == 'i')
    {
        cout << "3.14";
        pi(str.substr(2));
    }
    else
    {
        cout << str[0];
        pi(str.substr(1));
    }
}
int main()
{
    pi("pippppiiiipi");

    return 0;
}