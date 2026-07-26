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

int SumOfDigits(int Number) {

    int sum = 0;
    while (Number)
    {
        sum += Number % 10;
        Number /= 10;
    }
    return sum;
}

PrintSumResult(int Number){
	
	cout << "\nSum Of Digits = " << Number << "\n";
}


int main(void) {

	PrintSumResult(SumOfDigits(ReadPositiveNumber("Please enter a positive number?")))
	return 0;
}
