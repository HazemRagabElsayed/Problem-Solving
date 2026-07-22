#include <iostream>

using namespace std;

int main()
{

    unsigned short BaseOfTriangle, HeightOfTriangle;

    cout << "\nEnter Base Of Triangle: ";
    cin >> BaseOfTriangle;
    cout << "\nEnter Height Of Triangle: ";
    cin >> HeightOfTriangle;

    float AreaOfTriangle = (BaseOfTriangle / 2) * HeightOfTriangle;

    cout << "\nArea Of Triangle is: " << AreaOfTriangle << "\n";

    return 0;
}

