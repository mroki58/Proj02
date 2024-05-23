#pragma once
#include "Component.h"

class Compressor : public Component{
public:

    void Process(std::string &inputStr) override;

};