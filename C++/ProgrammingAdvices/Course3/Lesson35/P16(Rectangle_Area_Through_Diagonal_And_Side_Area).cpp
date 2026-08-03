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

unsigned short ReadLengthOfRectangle() {

    int LengthOfRectangle;
    cout << "\nEnter Length Of Rectangle: ";
    cin >> LengthOfRectangle;
    return LengthOfRectangle;

}

unsigned short ReadWidthOfRectangle() {

    int WidthOfRectangle;
    cout << "\nEnter Width Of Rectangle: ";
    cin >> WidthOfRectangle;
    return WidthOfRectangle;

}

float CalculateArea(unsigned short a,
    unsigned short d) {

    return float(a) * sqrt(pow(d, 2) - pow(a, 2));;

}

void PrintArea(unsigned long Area) {

    NewLineWithoutErasingBuffer();
    cout << "Area Of Rectangle is: " << Area;
    NewLineWithoutErasingBuffer();

}

void SwapNumbers(int& Num1, int& Num2) {
    int Temp = Num2;
    Num2 = Num1;
    Num1 = Temp;

}

int main()
{

    unsigned short a, d;
    cin >> a >> d;

    float Area =
        CalculateArea(a, d);

    PrintArea(Area);


    return 0;
}

