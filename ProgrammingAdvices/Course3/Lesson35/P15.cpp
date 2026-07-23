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

unsigned long CalculateAreaOfRectangle(unsigned short LengthOfRectangle,
    unsigned short WidthOfRectangle) {

    return (unsigned long)WidthOfRectangle * (unsigned long)LengthOfRectangle;

}

void PrintAreaOfRectangle(unsigned long Area) {

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

    unsigned short LengthOfRectangle, WidthOfRectangle;

    LengthOfRectangle = ReadLengthOfRectangle();
    WidthOfRectangle = ReadWidthOfRectangle();

    unsigned long AreaOfRectangle = 
        CalculateAreaOfRectangle(LengthOfRectangle,WidthOfRectangle);

    PrintAreaOfRectangle(AreaOfRectangle);


    return 0;
}

