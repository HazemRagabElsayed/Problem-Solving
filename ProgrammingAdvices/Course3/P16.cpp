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
    unsigned short a, d;
    cin >> a >> d;

    float Area = a * sqrt(pow(d, 2) - pow(a, 2));

    cout << "\nArea = " << Area << "\n";
    
    return 0;
}

