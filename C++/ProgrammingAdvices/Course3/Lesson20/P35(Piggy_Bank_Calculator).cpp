#include <iostream>

using namespace std;

int main()
{
    unsigned short Pennies, Nickeles, Dimes, Quarters, Dollars;
    cout << "\nEnter Pennies: ";
    cin >> Pennies;
    cout << "\nEnter Nickeles: ";
    cin >> Nickeles;
    cout << "\nEnter Dimes: ";
    cin >> Dimes;
    cout << "\nEnter Quarters: ";
    cin >> Quarters;
    cout << "\nEnter Dollars: ";
    cin >> Dollars;

    unsigned long TotalPennies = Pennies * 1 + Nickeles * 5 + Dimes * 10 +
        Quarters * 25 + Dollars * 100;

    float TotalDollars = float(TotalPennies) / 100;

    cout << "\nTotal Pennies is: " << TotalPennies;
    cout << "\nTotal Dollars is: " << TotalDollars << "\n";


    return 0;
}

