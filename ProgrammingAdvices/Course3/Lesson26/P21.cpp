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
    unsigned short Length;
    cout << "\nEnter Length: ";
    cin >> Length;

    const float PI = 3.14;
    float Area = pow(Length,2) / (4 * PI);

    cout << "\nArea is: " << Area << "\n";


    return 0;
}

