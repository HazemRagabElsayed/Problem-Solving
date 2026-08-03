#include <iostream>

using namespace std;

int main()
{
    unsigned short Number;
    cout << "\nEnter a Number: ";
    cin >> Number;
    unsigned long Square = Number * Number;
    unsigned long ToPower3 = Square * Number;
    unsigned long long ToPower4 = ToPower3 * Number;

    cout << "\nSquare: " << Square << "\n To Power 3: " << ToPower3;
    cout << "\nTo Power 4: " << ToPower4 << "\n";

    return 0;
}

