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

bool IsPerfectNumber(int Number)
{
    int sum = 0;
    for (int i = 1; i < Number; i++)
    {
        if (Number % i == 0)
		 sum += i;
    }
    return sum == Number;
}

void PrintPerfectNumbersFrom1ToN(int Number) {

    cout << "\nPerfect Numbers From 1 To " << Number;
    cout << " are: " << "\n";

    for (int i = 1; i <= Number; i++) {
        if (IsPerfectNumber(i))
            cout << i << "\n";
    }

}

int main(void) {

	PrintPerfectNumbersFrom1ToN(ReadPositiveNumber("Please enter a positive number ?"));
	return 0;
}