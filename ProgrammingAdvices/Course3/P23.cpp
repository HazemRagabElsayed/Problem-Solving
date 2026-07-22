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
    unsigned short a, b, c;
    cin >> a >> b >> c;

    const float PI = 3.14;
    float p = (a + b + c) / 2;
    float T = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
    T = T * T;
    float Area = PI * T;

    NewLineWithoutErasingBuffer();
    cout << "Area: " << Area;
    NewLineWithoutErasingBuffer();

    return 0;
}

