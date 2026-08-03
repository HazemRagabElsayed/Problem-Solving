#include <iostream>

using namespace std;

int main()
{

    float TotalBill, CashPaid;
    cout << "\nEnter Total Bill: ";
    cin >> TotalBill;
    cout << "\nEnter Cash Paid: ";
    cin >> CashPaid;

    float Remainder = CashPaid - TotalBill;

    cout << "\nRemainder: " << Remainder<<"\n";


    return 0;
}

