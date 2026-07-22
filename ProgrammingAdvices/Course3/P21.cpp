#include <iostream>

using namespace std;

int main()
{

    unsigned short Length;
    cout << "\nEnter Length: ";
    cin >> Length;

    const float PI = 3.14;
    float Area = (Length * Length) / (4 * PI);

    cout << "\nArea is: " << Area << "\n";

    return 0;
}

