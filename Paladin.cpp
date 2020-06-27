#include "Paladin.h"
#include "Utility.h"

Paladin::Paladin(std::string entity_name, int hp, int armor) : Character(hp, armor, 10), name(entity_name)
{
    defensiveItems = makeDefensiveItems(6);
    helpfulItems = makeHelpfulItems(2);
}

const std::string& Paladin::getName()
{
    return name;
}

std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
