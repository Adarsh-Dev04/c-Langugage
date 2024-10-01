#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter the age: "; // Changed the prompt to "age" for clarity
    cin >> x;
    // Ternary operator can be used but not necessary here.
    // This assigns the eligibility message to the variable vote
    string vote = (x >= 18) ? "Eligible to vote: " + to_string(x) + " at that age" : "Not eligible to vote: " + to_string(x) + "at that age";
    cout << vote << endl; // Output the result using the ternary operator

    return 0;
}
