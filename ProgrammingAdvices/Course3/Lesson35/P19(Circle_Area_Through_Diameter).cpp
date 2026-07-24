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

int main()
{




    unsigned short DiameterOfCircle = ReadDiameterOfCircle();

    float Area = CalculateAreaOfCircle(DiameterOfCircle);

    PrintAreaOfCircle(Area);


    return 0;
}

