#include "Encryptor.h"

void Encryptor::Process(std::string & inputStr)
{
    for(char & character: inputStr)
    {
        ++character;
    }
    
}