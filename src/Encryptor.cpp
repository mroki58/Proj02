#include "Encryptor.h"

void Encryptor::Process(std::string & inputStr)
{
    std::map<char, char> translate;
    translate['a'] = 'b';
    translate['b'] = 'c';
    translate['c'] = 'd';

    for(char & character: inputStr)
    {
        character = translate[character];
    }
    
}