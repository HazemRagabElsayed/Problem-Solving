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

int main()
{
    unsigned short SideOfSquare;
    cout << "\nEnter side of square: ";
    cin >> SideOfSquare;

    const float PI = 3.14;
    float AreaOfCircle = (PI * pow(SideOfSquare,2)) / 4;

    cout << "\nArea of circle is : " << ceil(AreaOfCircle) << "\n";


    return 0;
}

