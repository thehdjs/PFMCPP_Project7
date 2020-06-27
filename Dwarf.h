#pragma once
#include "Character.h"
#include <iostream>

struct Dwarf : Character
{
    Dwarf(std::string entity_name, int hp, int armor);// : Character(hp, armor, 4), name(entity_name);

    const std::string& getName() override;
    std::string getStats() override;
    
private:
    const std::string name;
};
