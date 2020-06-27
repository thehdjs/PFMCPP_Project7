#pragma once

#include "Character.h"

struct Dragon : Character
{
    Dragon(std::string entity_name, int hp, int armor) : Character(hp, armor, 80), name(entity_name) {}

    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;
    
private:
    const std::string name;
};

