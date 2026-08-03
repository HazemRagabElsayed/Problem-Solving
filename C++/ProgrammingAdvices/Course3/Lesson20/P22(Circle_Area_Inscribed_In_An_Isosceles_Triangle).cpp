#include <iostream>

using namespace std;

int main()
{

    float a, b;

    cin >> a >> b;

    const float PI = .314e1;

    float Area = (PI * b * b / 4) * ((2 * a - b) / (2 * a + b));

    cout << "\nArea is: "<<Area<<"\n";

    return 0;
}

