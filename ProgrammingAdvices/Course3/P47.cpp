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

    float LoanAmount,MontlyPayment;

    cout << "\nEnter Loan Amount: ";
    cin >> LoanAmount;
    cout << "\nEnter Montly Payment: ";
    cin >> MontlyPayment;

    unsigned short TotalMonths = LoanAmount / MontlyPayment;
    
    NewLineWithoutErasingBuffer();
    cout << "Total Months: " << TotalMonths;
    NewLineWithoutErasingBuffer();

    return 0;
}

