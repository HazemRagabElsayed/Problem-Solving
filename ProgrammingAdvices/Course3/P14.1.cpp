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

int ReadNumber() {
    int Number;
    cin >> Number;
    return Number;
}

void PrintNumbers(int Num1, int Num2) {

    NewLineWithoutErasingBuffer();
    cout << "Number1 is: " << Num1;
    NewLineWithoutErasingBuffer();
    cout << "Number2 is: " << Num2;

}

void SwapNumbers(int& Num1, int& Num2) {
    int Temp = Num2;
    Num2 = Num1;
    Num1 = Temp;

}

int main()
{

    int Number1, Number2;

    cout << "\nEnter Number1: ";
    Number1 = ReadNumber();
    cout << "\nEnter Number2: ";
    Number2 = ReadNumber();

    PrintNumbers(Number1, Number2);

    SwapNumbers(Number1, Number2);

    PrintNumbers(Number1, Number2);

    NewLineWithoutErasingBuffer();


    return 0;
}

