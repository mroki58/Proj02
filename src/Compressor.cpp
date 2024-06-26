#include "Compressor.h"

void Compressor::Process(std::string & inputStr)
{
    if(inputStr.size() == 0)
    {
        return; // nie powoduje bledu w linijce nr 23, przy pustym stringu
    }

    int noSameNeighborLetters = 1;
    std::string result = "";

    for(int i = 0; i < inputStr.length() - 1; ++i)
    {
        if(inputStr[i] == inputStr[i+1])
        {
            ++noSameNeighborLetters;
        }else{
            result += std::to_string(noSameNeighborLetters) + inputStr[i];
            noSameNeighborLetters = 1;
        }
    }
    result += std::to_string(noSameNeighborLetters) + inputStr[inputStr.length() - 1];
    inputStr = result;

}