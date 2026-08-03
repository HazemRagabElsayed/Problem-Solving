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


int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumbers(int arr[100], short& arrlength) {

    cout << "\nEnter number of elements of array:\n";
    cin >> arrlength;

    for (int i = 0; i < arrlength; i++) {

        arr[i] = RandomNumber(1, 100);

    }
}


void PrintArray(int arr[100], int arrlength) {

    for (int i = 0; i < arrlength; i++) cout << arr[i] << " ";

    cout << "\n";

}

 int main(void) {

    int arr[100], short arrlength = (short)ReadPositiveNumber("Enter number of elements of array: ");
	FillArrayWithRandomNumbers(arr, arrlength);

    cout << "\nArray elements:";
    PrintArray(arr, arrlength);

	return 0;
}
