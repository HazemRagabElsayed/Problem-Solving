#include <iostream>

using namespace std;

int main()
{

    unsigned char Mark1, Mark2, Mark3;

    cout << "\nEnter Mark1: ";
    cin >> Mark1;
    cout << "\nEnter Mark2: ";
    cin >> Mark2;
    cout << "\nEnter Mark3: ";
    cin >> Mark3;

    unsigned char AverageOfMarks = (Mark1 + Mark2 + Mark3) / 3;

    cout << AverageOfMarks << "\n";

    return 0;
}

