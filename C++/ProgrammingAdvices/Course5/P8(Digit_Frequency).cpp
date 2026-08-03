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

void PrintDigitFrequency(int Digit,int Number)
{
	cout << "Digit " << Digit <<
            " Frequency is " << CountDigitFrequency(Digit, Number) <<
            " Time(s).\n";
}

int main(void) {

	PrintDigitFrequency(ReadPositiveNumber("Please enter one digit to check?"),ReadPositiveNumber("Please enter the main number?"));
	return 0;
}
