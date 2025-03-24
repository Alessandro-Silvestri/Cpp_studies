/*
CIPHER ENCRYPTION
Author Alessandro Silvestri <alessandro.silvestri.work@gmail.com>
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string secretPhrase{};
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string encrypted{""};
    int index{0};
    string letterAdd{};
    
    cout << "insert a phrase to encrypt: ";
    getline(cin, secretPhrase);

    for (char letter : secretPhrase)
    {
        if (alphabet.find(letter) != string::npos)
        {
            index = alphabet.find(letter);
            letterAdd = key[index];
            encrypted.append(letterAdd);
        }
        else
        {
            letterAdd = letter;
            encrypted.append(static_cast<string>(letterAdd));
        }
    }

    cout << "\nEncrypted:\n" << encrypted << endl;
    return 0;
}
