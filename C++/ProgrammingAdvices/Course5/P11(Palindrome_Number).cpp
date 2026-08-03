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

bool IsPalindromeNumber(int Number) {
    return Number == ReverseNumber(Number);
}

int main(void) {


if (IsPalindromeNumber(ReadPositiveNumber("Please enter a positive number?")))
        cout << "\nYes , it is a Palindrome number.\n";  
    else
        cout << "\nNo , it is NOT a Palindrome number.\n";
    
	return 0;
}
