#include <iostream>
#include <string>

int ReadPositiveNumber(string message)
{
    int Number = 0;
    do {
        cout << message << "\n";
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

void PrintDigitsInReverseOrder(int Number) {
   
        while (Number)
        {
            cout << Number % 10 << "\n";
            Number /= 10;
        }
}

using namespace std; int main(void) {

	PrintDigitsInReverseOrder(ReadPositiveNumber("Please enter a positive number?"));
	return 0;
}
