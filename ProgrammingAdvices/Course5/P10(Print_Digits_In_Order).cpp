#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string message)
{
    int Number = 0;
    do {
        cout << message << "\n";
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int ReverseNumber(int Number) {

    int reversednumber = 0;

    while (Number)
    {
        reversednumber = reversednumber * 10 + Number % 10;
        Number /= 10;
    }
    return reversednumber;
}

void PrintDigitsInReverseOrder(int Number) {
   
        while (Number)
        {
            cout << Number % 10 << "\n";
            Number /= 10;
        }
}

int main(void) {

	PrintDigitsInReverseOrder(ReverseNumber(ReadPositiveNumber("Please enter a positive number?")));
	return 0;
}
