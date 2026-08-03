#include <iostream>
#include <string>

using namespace std;

enum enCharacter
{
	SmallLetter,
	CapitalLetter,
	SpecialCharacter,
	Digit
};

enum class enASCCI 
{
	a = 97,
	z = 122,
	A = 65,
	Z = 90,
};

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

char RandomCharacter(enCharacter character)
{
    int number;
    switch (character)
    {
    case enCharacter::SmallLetter:
        number = RandomNumber((int)enASCCI::a,(int)enASCCI::z);
        break;
    case enCharacter::CapitalLetter:
        return RandomNumber((int)enASCCI::A, (int)enASCCI::Z);
        break;
    case enCharacter::SpecialCharacter:
        return RandomNumber(33, 47);
        break;
    case enCharacter::Digit:
        return RandomNumber(48, 57);
        break;
    default:
        break;
    }
}

string GenerateWord(enCharacter chartype, short length) {
    string word = "";

    for (int i = 1; i <= length; i++) {

        word += RandomCharacter(chartype);

    }
    return word;
}

string GenerateKey() {

    string Key = "";

    Key = GenerateWord(CapitalLetter, 4) + "-";
    Key += GenerateWord(CapitalLetter, 4) + "-";
    Key += GenerateWord(CapitalLetter, 4) + "-";
    Key += GenerateWord(CapitalLetter, 4);
    
    return Key;
}

void GenerateKeys(int NumberOfKeys) {
    for (int i = 1; i <= NumberOfKeys; i++) {
        cout << "Key[" << i << "] : ";
        cout << GenerateKey() << "\n";
    }
}

int main(void) {

	srand((unsigned)time(NULL));

	GenerateKeys(ReadPositiveNumber("Pleaes enter how many keys to generate? \n"));
	return 0;
}
