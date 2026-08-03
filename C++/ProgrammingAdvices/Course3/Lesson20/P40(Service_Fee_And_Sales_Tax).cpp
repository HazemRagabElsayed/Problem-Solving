#include <iostream>

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

    float BillValue;
    cout << "\nEnter Bill Value: ";
    cin >> BillValue;
    
    float TotalBill = BillValue * 1.1;
    TotalBill = TotalBill * 1.16;

    cout << "\nTotal Bill is: " << TotalBill<<"\n";

    return 0;
}

