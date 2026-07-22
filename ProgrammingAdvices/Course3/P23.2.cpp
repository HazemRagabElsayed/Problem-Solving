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

float CalculateAreaOfCircle(unsigned short a, unsigned short b, unsigned short c) {
    const float PI = 3.14;
    float p = (float)(a + b + c) / 2;
    float T = float((a * b * c)) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
    T = T * T;

    return PI * T;

}

void PrintAreaOfCircle(float Area) {

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




    unsigned short a, b, c;
    cin >> a >> b >> c;

    float Area = CalculateAreaOfCircle(a,b,c);

    PrintAreaOfCircle(Area);



    return 0;
}

