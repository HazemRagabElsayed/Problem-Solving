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
    const float PI = .314E1;

    cout << "\nEnter Diameter of Circle: ";
    unsigned short DiameterOfCircle;
    cin >> DiameterOfCircle;

    float AreaOfCircle = (PI * pow(DiameterOfCircle,2)) / 4;

    cout << "\nArea of circle is : " << ceil(AreaOfCircle) << "\n";


    return 0;
}

