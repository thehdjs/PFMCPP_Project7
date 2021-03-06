#pragma once
#include "Character.h"
#include "AttackItem.h"

struct DragonSlayer : Character
{
    DragonSlayer(std::string entity_name, int hp, int armor) ;//: Character(hp, armor, 4), name(entity_name) {}

    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;
    

protected:
    std::unique_ptr<Item> attackItem;
private:
    const std::string name;
};
