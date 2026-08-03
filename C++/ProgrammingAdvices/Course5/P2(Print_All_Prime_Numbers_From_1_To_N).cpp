#include <iostream>
#include <string>

using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

int ReadPositiveNumber(string message)
{
    int Number = 0;
    do {
        cout << message << "\n";
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

enPrimeNotPrime CheckPrime(int Number) {

    int M = round(Number / 2);

    for (int counter = 2; counter <= M; counter++) {
        if (Number % counter == 0) 
		return enPrimeNotPrime::NotPrime;
    }

    return enPrimeNotPrime::Prime;
}

void PrintPrimeNumbersFrom1ToN(int Number) {

    cout << "\nPrime Numbers From 1 To " << Number;
    cout << " are: " << "\n";

    for (int i = 1; i <= Number; i++) {
        if (CheckPrime(i) == enPrimeNotPrime::Prime)
            cout << i << "\n";
    }

}

int main(void) {

	PrintPrimeNumbersFrom1ToN(ReadPositiveNumber("Please enter a positive number ?"));
	return 0;
}

