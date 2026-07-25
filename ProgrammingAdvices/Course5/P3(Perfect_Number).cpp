#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string message)
{
    int Number = 0;
    do {
        cout << message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

bool IsPerfectNumber(int Number)
{
    int sum = 0;
    for (int i = 1; i < Number; i++)
    {
        if (Number % i == 0) sum += i;
    }
    return sum == Number;
}


void PrintResults(int Number)
{
    if (isPerfectNumber(Number))
        cout << Number << " Is Perfect Number.\n";  
    else
        cout << Number << " Is NOT Perfect Number.\n"; 
}

int main(void) {

	PrintResults(ReadPositiveNumber("Please enter a positive number?"))
	return 0;
}
