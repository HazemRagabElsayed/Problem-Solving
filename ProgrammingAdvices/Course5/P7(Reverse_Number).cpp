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

int ReverseNumber(int Number) {

    int reversednumber = 0;

    while (Number)
    {
        reversednumber = reversednumber * 10 + Number % 10;
        Number /= 10;
    }
    return reversednumber;
}

using namespace std;

int main(void) {

	cout << "\nReverse is : \n" << ReverseNumber(ReadPositiveNumber("Please enter a positive number?")) << "\n";
	return 0;
}
