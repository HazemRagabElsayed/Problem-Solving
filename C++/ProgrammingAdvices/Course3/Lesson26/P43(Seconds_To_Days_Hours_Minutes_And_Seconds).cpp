#include <iostream>
#include <cmath>

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
    cout << "\nEnter Number Of Seconds: ";
    unsigned long long NumberOfSeconds;
    cin >> NumberOfSeconds;

    unsigned short MinuteSeconds = 60;
    unsigned short HourSeconds = MinuteSeconds * 60;
    unsigned long DaySeconds = HourSeconds * 24;

    unsigned short Days = round(NumberOfSeconds / DaySeconds);
    unsigned long Remainder = NumberOfSeconds % DaySeconds;

    unsigned short Hours = round(Remainder / HourSeconds);
    Remainder = Remainder % HourSeconds;

    unsigned short Minutes = round(Remainder / MinuteSeconds);
    Remainder = Remainder % MinuteSeconds;

    unsigned short Seconds = Remainder;

    NewLineWithoutErasingBuffer();
    cout << Days << ":" << Hours << ":" << Minutes << ":" << Seconds;
    NewLineWithoutErasingBuffer();


    return 0;
}

