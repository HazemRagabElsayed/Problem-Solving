#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string message)
{
    int Number = 0;
    do {
        cout << message << "\n";
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

void ReadArray(int arr[100], int& arrlength) {

    cout << "\nEnter number of elements: \n";
    cin >> arrlength;

    cout << "\nEnter array elements: \n";

    for (int i = 0; i < arrlength; i++) {

        cout << "Element [" << i + 1 << "] : ";
        cin >> arr[i];

    }

}

void PrintArray(int arr[100], int arrlength) {

    for (int i = 0; i < arrlength; i++) cout << arr[i] << " ";

    cout << "\n";

}

int TimesRepeated(int Digit, int arr[100], int arrlength) {

    int count = 0;

    for (int i = 0; i < arrlength; i++)
        
        if (Digit == arr[i]) count++;

    return count;
}

int main(void) {

	int arr[100];
     int arrlength,NumberToCheck;

	ReadArray(arr,arrlength);

	NumberToCheck = ReadPositiveNumber("Enter the number you want to check: ");

    cout << "Original Array: ";
    
	PrintArray(arr,arrlength);

    cout << "The number " << NumberToCheck << " is repeated " << TimesRepeated(NumberToCheck, arr, arrlength) << " time(s) \n";
	return 0;
}
