#include <iostream>
#include <string>

using namespace std;

string ReadString(string message) {

    string word;

    cout << message << "\n";

    getline(cin,word);

    return word;

}


string EncryptText(string Text, short EncryptionKey)
{
    for (int i = 0; i < Text.length(); i++)
    {
        Text[i] = char((int)Text[i] + EncryptionKey);
    }
    return Text; 
}

string DecryptText(string Text, short EncryptionKey)
{
    
    for (int i = 0; i < Text.length(); i++)
    {
        Text[i] = char((int)Text[i] - EncryptionKey);
    }
    return Text; 
}


int main(void) {

	const short EncryptionKey = 2; 

    string TextAfterEncryption, TextAfterDecryption;  
    
    string Text = ReadString("Please enter the text to encrypt :");
    
    TextAfterEncryption = EncryptText(Text, EncryptionKey);
    
    TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptionKey);

    cout << "\nText Before Encryption : " << Text << "\n";

    cout << "Text After Encryption  : " << TextAfterEncryption << "\n";

    cout << "Text After Decryption  : " << TextAfterDecryption << "\n";

	return 0;
}
