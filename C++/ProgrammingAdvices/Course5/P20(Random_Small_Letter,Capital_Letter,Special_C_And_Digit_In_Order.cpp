#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime> 

using namespace std;

enum enCharacter
{
	SmallLetter,
	CapitalLetter,
	SpecialCharacter,
	Digit
};

enum enASCCI 
{
	a = 97,
	z = 122,
	A = 65,
	Z = 90,
};

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

int main(void) {

	 srand((unsigned)time(NULL));

    cout << RandomCharacter(enCharacter::SmallLetter) << "\n";    
    cout << RandomCharacter(enCharacter::CapitalLetter) << "\n";   
    cout << RandomCharacter(enCharacter::SpecialCharacter) << "\n"; 
    cout << RandomCharacter(enCharacter::Digit) << "\n";     

	return 0;
}
