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

void PrintInvertedLetterPattern(int Number)
{
    cout << "\n";
 
    for (int i = Number; i >= 1; i--)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << char((i - 1) + 'A');
        }

        cout << "\n";
    }

}

int main(void) {

	PrintInvertedLetterPattern(ReadPositiveNumber("Please enter the a number?"));
	return 0;
}
