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

unsigned short ReadNumber() {

    unsigned short Number;
    cout << "\nEnter a Number: ";
    cin >> Number;
    return Number;

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

void PrintNumber(string Text, unsigned long long Number) {

    NewLineWithoutErasingBuffer();
    cout << Text << Number;
    NewLineWithoutErasingBuffer();

}

int main()
{

    unsigned short Number = ReadNumber();

    unsigned long Square = pow(Number, 2);
    unsigned long ToPower3 = pow(Number, 3);
    unsigned long long ToPower4 = pow(Number, 4);

    PrintNumber("Square: ", Square);
    PrintNumber("To Power 3: ", ToPower3);
    PrintNumber("To Power 4: ", ToPower4);

    return 0;
}

