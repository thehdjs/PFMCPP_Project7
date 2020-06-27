#pragma once
#include "Character.h"
#include "AttackItem.h"

struct DragonSlayer : Character
{
    DragonSlayer(std::string entity_name, int hp, int armor) ;//: Character(hp, armor, 4), name(entity_name) {}

    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;
    
private:
    std::vector<std::unique_ptr<Item>> attackItems;
    const std::string name;
};
