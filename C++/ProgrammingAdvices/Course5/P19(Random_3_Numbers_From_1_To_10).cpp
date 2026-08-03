#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime> 

using namespace std; 

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

int main(void) {

	srand((unsigned)time(NULL));
	
	cout << RandomNumber(1, 10) << "\n";
    cout << RandomNumber(1, 10) << "\n";
    cout << RandomNumber(1, 10) << "\n";

	return 0;
}
