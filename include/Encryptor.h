#pragma once
#include "Component.h"
#include <map>


class Encryptor: public Component{
public:
    
    void Process(std::string &inputStr) override;

};