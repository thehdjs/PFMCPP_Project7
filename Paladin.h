#pragma once
#include "Character.h"

struct Paladin : Character
{

    Paladin(std::string entity_name, int hp, int armor);// : Character(hp, armor, 10), name(entity_name) {}

    const std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};
