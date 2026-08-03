
#include <iostream>

using namespace std;

struct stApplicantInfo {
    short Age;
    bool HasDrivingLicense;
};

stApplicantInfo ReadApplicantInfo() {

    stApplicantInfo Applicant;
    cout << "Enter Age: ";
    cin >> Applicant.Age;

    cout << "Has driving license: [1]true , [0] false \n";
    cin >> Applicant.HasDrivingLicense;

    return Applicant;

}

bool IsApplicantAccepted(stApplicantInfo Applicant) {
    return  (Applicant.Age > 21 && Applicant.HasDrivingLicense);
}

void PrintHiredOrRejected(stApplicantInfo Applicant) {

    if (IsApplicantAccepted(Applicant)) {
        cout << "\nHired";
    }
    else {
        cout << "\nRejected";
    }

}

int main()
{

    PrintHiredOrRejected(ReadApplicantInfo());

    return 0;
}

