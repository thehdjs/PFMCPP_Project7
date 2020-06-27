#include "Dwarf.h"
#include "Utility.h"

const std::string& Dwarf::getName() 
{
    return name; // maybe copy to a new string
}

Dwarf::Dwarf(std::string entity_name, int hp, int armor) : Character(hp, armor, 4), name(entity_name)
{
    defensiveItems = makeDefensiveItems(5);
    helpfulItems = makeHelpfulItems(3);
}

std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}

