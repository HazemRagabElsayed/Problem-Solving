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

int CountDigitFrequency(int Digit, int Number) {
    int Frequency = 0;
	
    while (Number)
    {
        if (Digit == Number % 10)
            ++Frequency;
        Number /= 10;
    }
    return Frequency;
    
}

void PrintAllDigitsFrequency(int Number)
{
    cout << endl;
    for (int i = 0; i <= 9; i++) {
        if (CountDigitFrequency(i, Number) != 0)
            cout << "Digit " << i <<
            " Frequency is " << CountDigitFrequency(i, Number) <<
            " Time(s).\n";
    }
}

int main(void) {

	PrintAllDigitsFrequency(ReadPositiveNumber("Please enter the a number?"))
	return 0;
}
