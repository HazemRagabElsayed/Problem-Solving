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
    unsigned short RadiusOfCircle;
    cout << "\nEnter Raius of circle: ";
    cin >> RadiusOfCircle;

    const float PI = 3.14;
    float Area = PI * pow(RadiusOfCircle, 2);

    cout << "\nArea of circle = " << ceil(Area) << "\n";

    return 0;
}

