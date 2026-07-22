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

    float LoanAmount,HowManyMonths;

    cout << "\nEnter Loan Amount: ";
    cin >> LoanAmount;
    cout << "\nEnter How Many Months: ";
    cin >> HowManyMonths;

    unsigned short MonthlyPayment = LoanAmount / HowManyMonths;
    
    NewLineWithoutErasingBuffer();
    cout << "Monthly Payment: " << MonthlyPayment;
    NewLineWithoutErasingBuffer();

    return 0;
}

