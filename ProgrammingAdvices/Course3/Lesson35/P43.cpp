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

unsigned short ReadDiameterOfCircle() {

    unsigned short DiameterOfCircle;
    cout << "\nEnter Diameter Of Circle: ";
    cin >> DiameterOfCircle;
    return DiameterOfCircle;

}

unsigned short ReadWidthOfRectangle() {

    unsigned short WidthOfRectangle;
    cout << "\nEnter Width Of Rectangle: ";
    cin >> WidthOfRectangle;
    return WidthOfRectangle;

}

float CalculateAreaOfCircle(unsigned short DiameterOfCircle) {
    const float PI = 3.14;

    return (PI * pow(DiameterOfCircle, 2)) / 4;

}

void PrintAreaOfCircle(float Area) {

    NewLineWithoutErasingBuffer();
    cout << "\nArea of circle = " << ceil(Area) << "\n";
    NewLineWithoutErasingBuffer();

}

void SwapNumbers(int& Num1, int& Num2) {
    int Temp = Num2;
    Num2 = Num1;
    Num1 = Temp;

}

unsigned long long ReadNumber(string Text) {
    unsigned long long Number;
    NewLineWithoutErasingBuffer();
    cout << Text;
    cin >> Number;
    NewLineWithoutErasingBuffer();
    return Number;
}

unsigned short CalculateDays(unsigned long long NumberOfSeconds) {

    unsigned long DaySeconds = 60 * 60 * 24;
    return round(NumberOfSeconds / DaySeconds);

}
unsigned short CalculateHours(unsigned long NumberOfSeconds) {

    unsigned short HourSeconds = 60 * 60;
    return round(NumberOfSeconds / HourSeconds);
}
unsigned short CalculateMinutes(unsigned short NumberOfSeconds) {

    unsigned short MinuteSeconds = 60;
    return round(NumberOfSeconds / MinuteSeconds);
}
unsigned short CalculateRemainderOfSecondsFromDays(unsigned long NumberOfSeconds) {
    unsigned long DaySeconds = 60 * 60 * 24;
    return NumberOfSeconds % DaySeconds;

}
unsigned short CalculateRemainderOfSecondsFromHours(unsigned long NumberOfSeconds) {
    unsigned short HourSeconds = 60 * 60;
    return NumberOfSeconds % HourSeconds;

}
unsigned short CalculateRemainderOfSecondsFromMinutes(unsigned long NumberOfSeconds) {
    unsigned short MinuteSeconds = 60;
    return NumberOfSeconds % MinuteSeconds;

}

void PrintResults(unsigned short Days, unsigned short Hours, unsigned short Minutes, unsigned short Seconds) {
    NewLineWithoutErasingBuffer();
    cout << Days << ":" << Hours << ":" << Minutes << ":" << Seconds;
    NewLineWithoutErasingBuffer();
}

int main()
{


    unsigned long long NumberOfSeconds = ReadNumber("Enter Number Of Seconds : ");

    unsigned short Days = CalculateDays(NumberOfSeconds);
    unsigned long Remainder = CalculateRemainderOfSecondsFromDays(NumberOfSeconds);

    unsigned short Hours = CalculateHours(Remainder);
    Remainder = CalculateRemainderOfSecondsFromHours(Remainder);

    unsigned short Minutes = CalculateMinutes(Remainder);
    Remainder = CalculateRemainderOfSecondsFromMinutes(Remainder);

    unsigned short Seconds = Remainder;

    PrintResults(Days, Hours, Minutes,Seconds);


    return 0;
}

