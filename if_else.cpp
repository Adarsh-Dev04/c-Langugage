#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter the number:";
    cin >> x;

    if (x >= 17)
    {
        cout  << "eligible to vote :"<<x;
    }
    else
    {
        cout  << "not eligible to vote:"<<x;
    }
return 0;
}
