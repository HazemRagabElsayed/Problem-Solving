#include <iostream>

using namespace std;

int main()
{
    unsigned short LengthOfRectangle, WidthOfRectangle;
    cout << "\nEnter Length Of Rectangle: ";
    cin >> LengthOfRectangle;
    cout << "\nEnter Width Of Rectangle: ";
    cin >> WidthOfRectangle;

    unsigned long AreaOfRectangle = LengthOfRectangle * WidthOfRectangle;

    cout << "\nArea Of Rectangle is: " << AreaOfRectangle << "\n";

    return 0;
}

