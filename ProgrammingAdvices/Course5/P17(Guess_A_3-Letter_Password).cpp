#include <iostream>
#include <string>

using namespace std; 

string ReadString(string message) {

    string word;

    cout << message << "\n";

    getline(cin,word);

    return word;

}

bool Guess3LetterPassword(string Password)
{
    string word = "";
    int counter = 0;
    for (int i = 'A'; i <= 'Z'; i++)
    {
        for (int j = 'A'; j <= 'Z'; j++)
        {
            for (int z = 'A'; z <= 'Z'; z++)
            {
                word = "";

                word = word + char(i);
                word = word + char(j);
                word = word + char(z);

                counter++;

                cout << "Trial[" << counter << "] : " << word<<"\n";

                if (Password == word)
                {
                    cout << "\n" << "\n";
                    cout << "Password is " << word<<"\n";
                    cout << "Found after " << counter << "Trial(s)" << "\n";
                    return true;
                }
                
            }
        }
    }
    return false;

}

int main(void) {

	Guess3LetterPassword(ReadString("Please enter a 3-Letter Password (all capital)?"));

	return 0;
}
