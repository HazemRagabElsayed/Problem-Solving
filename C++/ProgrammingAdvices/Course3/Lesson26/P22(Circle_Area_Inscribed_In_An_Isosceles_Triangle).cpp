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
    float a, b;

    cin >> a >> b;

    const float PI = .314e1;

    float Area = (PI * pow(b,2)/ 4) * ((2 * a - b) / (2 * a + b));

    cout << "\nArea is: " << Area << "\n";

    return 0;
}

