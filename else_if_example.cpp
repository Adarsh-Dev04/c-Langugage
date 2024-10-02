#include <iostream>
using namespace std;
int main()
{

    int systempasscode = 1337;
int a;
cout<<"enter the number";
cin>>a;
    if (systempasscode == a)

    {
        cout << "Correct code.\nThe system is now unlocked.\n";
    }
    else
    {
        cout << "Wrong code.\nThe system remains locked.\n";
    }

    return 0;
}
