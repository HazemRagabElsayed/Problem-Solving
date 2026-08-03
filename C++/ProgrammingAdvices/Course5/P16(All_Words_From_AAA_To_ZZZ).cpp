#include <iostream>
#include <string>

using namespace std; 

void PrintAllWordsFromAAAToZZZ(void)
{
    for (int i = 'A'; i <= 'Z';i++)
    {
        for (int j = 'A'; j <= 'Z'; j++)
        {
            for (int z = 'A'; z <= 'Z'; z++)
            {
                cout << char(i) << char(j) << char(z)<<"\n";
            }
        }
    }


}

int main(void) {

	PrintAllWordsFromAAAToZZZ();
	return 0;
}
