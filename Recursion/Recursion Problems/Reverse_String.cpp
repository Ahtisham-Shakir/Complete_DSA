#include <iostream>
#include <string>
using namespace std;

void reverse(string str)
{
    if (str == "")
    {
        return;
    }
    string ros = str.substr(1);
    reverse(ros);
    cout << str[0];
}

int main()
{
    reverse("Ahtisham");
    return 0;
}