#include <iostream>
#include <cmath>

using namespace std;

//Use this function after each 50 using of cout without endl
void NewLineAndEraseBuffer() {
    cout << endl;
}

void NewLineWithoutErasingBuffer() {
    cout << "\n";
}

int main()
{
    unsigned short Number;
    cout << "\nEnter a Number: ";
    cin >> Number;
    unsigned long Square = pow(Number, 2);
    unsigned long ToPower3 = pow(Number, 3);
    unsigned long long ToPower4 = pow(Number, 4);

    cout << "\nSquare: " << Square << "\nTo Power 3: " << ToPower3;
    cout << "\nTo Power 4: " << ToPower4 << "\n";


    return 0;
}

