#pragma once
#include <iostream>

class Component{
public:

    virtual void Process(std::string & inputStr) = 0;

};
