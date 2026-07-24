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

float CalculateArea(float a, float b) {
    const float PI = 3.14;

    return (PI * pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));

}

void PrintArea(float Area) {

    NewLineWithoutErasingBuffer();
    cout << "\nArea of circle = " << Area << "\n";
    NewLineWithoutErasingBuffer();

}

void SwapNumbers(int& Num1, int& Num2) {
    int Temp = Num2;
    Num2 = Num1;
    Num1 = Temp;

}

int main()
{


    float a, b;

    cin >> a >> b;

    float Area = CalculateArea(a,b);

    PrintArea(Area);


    return 0;
}

