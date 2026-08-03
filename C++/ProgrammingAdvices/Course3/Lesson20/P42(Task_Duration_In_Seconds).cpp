#include <iostream>

using namespace std;

//Use this function after each 50 using of cout without endl
void NewLineAndEraseBuffer() {
    cout << endl;
}

void NewLineWithoutErasingBuffer() {
    cout << "\n";
}

int main()
{
    unsigned short NumberOfSeconds;
    cout << "\nEnter Number Of Seconds: ";
    cin >> NumberOfSeconds;
    unsigned short NumberOfMinutes;
    cout << "\nEnter Number Of Minutes: ";
    cin >> NumberOfMinutes;
    unsigned short NumberOfHours;
    cout << "\nEnter Number Of Hours: ";
    cin >> NumberOfHours;
    unsigned short NumberOfDays;
    cout << "\nEnter Number Of Days: ";
    cin >> NumberOfDays;

    unsigned long long TotalSeconds =
        NumberOfSeconds * 1 +
        NumberOfMinutes * 60 +
        NumberOfHours * 60 * 60 +
        NumberOfDays * 24 * 60 * 60;

    cout << "\nTotal Seconds: " << TotalSeconds << "\n";

    return 0;
}

