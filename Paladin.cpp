#include "Paladin.h"
#include "Utility.h"

Paladin::Paladin(std::string entity_name, int hp, int armor) : Character(hp, armor, 10), name(entity_name)
{
    defensiveItems = makeDefensiveItems(2);
    helpfulItems = makeHelpfulItems(4);
}

const std::string& Paladin::getName()
{
    return name;
}

std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
