#include <iostream>

using namespace std;

int main()
{
    const float PI = .314E1;

    cout << "\nEnter Diameter of Circle: ";
    unsigned short DiameterOfCircle;
    cin >> DiameterOfCircle;

    float AreaOfCircle = (PI * DiameterOfCircle * DiameterOfCircle) / 4;

    cout << "\nArea of circle is : " << AreaOfCircle << "\n";


    return 0;
}

