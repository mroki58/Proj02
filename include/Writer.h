#pragma once
#include "Component.h"

class Writer: public Component{
public:
    
    void Process(std::string & inputStr) override;

};