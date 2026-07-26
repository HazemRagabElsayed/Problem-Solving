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

void PrintLetterPattern(int Number)
{
    cout << "\n";

    for (int i = 1; i <= Number; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << char((i - 1) + 'A');
        }

        cout << "\n";
    }


}

int main(void) {

	PrintLetterPattern(ReadPositiveNumber("Please enter the a number?"));
	return 0;
}
