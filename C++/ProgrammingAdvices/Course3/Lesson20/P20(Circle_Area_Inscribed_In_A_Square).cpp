#include <iostream>

using namespace std;

int main()
{

    unsigned short SideOfSquare;
    cout << "\nEnter side of square: ";
    cin >> SideOfSquare;
    
    const float PI = 3.14;
    float AreaOfCircle = (PI * (SideOfSquare * SideOfSquare)) / 4;

    cout << "\nArea of circle is : " << AreaOfCircle << "\n";

    return 0;
}

