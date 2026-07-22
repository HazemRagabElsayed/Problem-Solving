#include <iostream>

using namespace std;

int main()
{

    int Number1, Number2;

    cout << "\nEnter Number1: ";
    cin >> Number1;
    cout << "\nEnter Number2: ";
    cin >> Number2;

    cout << "\nNumber1 is: " << Number1;
    cout << "\nNumber2 is: " << Number2;

    int Temp = Number2;
    Number2 = Number1;
    Number1 = Temp;

    cout << "\nNumber1 is: " << Number1;
    cout << "\nNumber2 is: " << Number2;
    cout << "\n";

    return 0;
}

