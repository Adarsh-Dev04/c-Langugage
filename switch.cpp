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

        switch (pressKey)
        {
        case 1:
            cout << "Hint : " << password;
            break;

        case 2:
            cout << "Quieting.....";
            break;
        default:
            cout << "Invalid entry";
            break;
        }
    }
}