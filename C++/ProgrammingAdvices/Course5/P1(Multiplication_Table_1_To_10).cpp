#include <iostream>
#include <string>

using namespace std;

void PrintTableHeader() {

	cout << "\n\n\t\t\tMultiplication Table From 1 to 10\n\n";
	
	for (int i = 1; i <= 10; i++) {
		cout << "\t" << i;
	}
	cout << "\n____________________________________________________________________________________\n";

}
string ColumnSeparator(int i) {
	if (i < 10)
		return "   |";
	else
		return "  |";
}

void PrintMultiplicationTable() {

	PrintTableHeader();

	for (int i = 1; i <= 10; i++) {

		cout << " " << i << ColumnSeparator(i) << "\t";
		for (int j = 1; j <= 10; j++) {
			cout << i * j << "\t";
		}
		
		cout << endl;
	}
}

int main(void) {

		PrintMultiplicationTable();
		return 0;
	}