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

unsigned short ReadNumber(string Text) {
    unsigned short Number;
    NewLineWithoutErasingBuffer();
    cout << Text;
    cin >> Number;
    NewLineWithoutErasingBuffer();
    return Number;
}

void PrintTotalSeconds(unsigned long long TotalSeconds) {
    NewLineWithoutErasingBuffer();
    cout << "Total Seconds: " << round(TotalSeconds);
    NewLineWithoutErasingBuffer();
}

int main()
{

    unsigned short NumberOfSeconds = ReadNumber("Enter Number Of Seconds : ");
    unsigned short NumberOfMinutes = ReadNumber("Enter Number Of Minutes: ");
    unsigned short NumberOfHours = ReadNumber("Enter Number Of Hours: ");
    unsigned short NumberOfDays = ReadNumber("Enter Number Of Days: ");


    unsigned long long TotalSeconds =
        NumberOfSeconds * 1 +
        NumberOfMinutes * 60 +
        NumberOfHours * 60 * 60 +
        NumberOfDays * 24 * 60 * 60;


    PrintTotalSeconds(TotalSeconds);

    return 0;
}

