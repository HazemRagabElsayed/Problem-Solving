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

unsigned short ReadRadiusOfCircle() {

    unsigned short RadiusOfCircle;
    cout << "\nEnter Radius Of Circle: ";
    cin >> RadiusOfCircle;
    return RadiusOfCircle;

}

unsigned short ReadWidthOfRectangle() {

    unsigned short WidthOfRectangle;
    cout << "\nEnter Width Of Rectangle: ";
    cin >> WidthOfRectangle;
    return WidthOfRectangle;

}

float CalculateAreaOfCircle(unsigned short RadiusOfCircle) {
    const float PI = 3.14;

    return PI * pow(RadiusOfCircle, 2);

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

int main()
{


   

    unsigned short RadiusOfCircle = ReadRadiusOfCircle();

    float Area = CalculateAreaOfCircle(RadiusOfCircle);

    PrintAreaOfCircle(Area);


    return 0;
}

