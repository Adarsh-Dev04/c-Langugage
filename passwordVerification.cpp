// #include <iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cout << "create the password";
//     cin >> x;
//     x = 2598;
//     cout << "done";
//     int a;
//     cout << "enter the password";
//     cin >> a;
//     if (2598 == a)
//     {
//         cout << "Correct password.\n your password is correct.\n";
//     }
//     else
//     {
//         cout << "Wrong code.\nyour password is incorrect.\n";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    cout << "create a password : ";
    int password;
    cin >> password;
    cout << "done Your password has been set : " << password;
    cout << "\n Enter your password : ";
    int newPassword;
    cin >> newPassword;
    if (password == newPassword)
    {
        cout << "Your password is correct : " << password;
    }
    else
    {
        cout << "Press enter 1 for hint \n"
             << "Press enter 2 for quit \n";
        int pressKey;
        cin >> pressKey;

        if (pressKey == 1)
        {
            cout << "Hint : " << password;
        }
        else if (pressKey == 2)
        {
            cout << "Quieting.....";
        }
        else
        {
                cout << "Invalid entry";
        }
    }
}