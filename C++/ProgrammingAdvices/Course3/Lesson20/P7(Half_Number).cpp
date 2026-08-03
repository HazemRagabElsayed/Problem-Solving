#include <iostream>

using namespace std;

int main()
{
    cout << "Enter Number: ";
    int Number;
    cin >> Number;
    float HalfNumber = float(Number) / 2;
    cout << "\nHalf of " << Number << " is " << HalfNumber << "\n";

    return 0;
}

