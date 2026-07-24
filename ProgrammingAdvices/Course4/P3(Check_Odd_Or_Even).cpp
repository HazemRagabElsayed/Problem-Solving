
#include <iostream>

using namespace std;

enum enOddOrEven{Odd = 1, Even = 0};

short ReadNumber() {
    short Number;
    cout << "Enter a Number: ";
    cin >> Number;
    return Number;
}

enOddOrEven CheckOddOrEven(short Number) {

    return enOddOrEven(Number % 2);

}

void PrintOddOrEven(enOddOrEven OddOrEven) {
    
    switch (OddOrEven) {
    case Even:
        cout << "\n Number Is Even";
        break;
    case Odd:
        cout << "\n Number Is Odd";
        break;
    default:
        break;
    }

}

int main()
{

    PrintOddOrEven(CheckOddOrEven(ReadNumber()));

    return 0;
}