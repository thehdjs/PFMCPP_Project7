#pragma once

struct DragonSlayer : Character
{
    DragonSlayer(std::string entity_name, int hp, int armor) : Character(hp, armor, 15), name(entity_name) {}

    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;
private:
    const std::string name;
};
