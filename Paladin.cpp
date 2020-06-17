#include "Paladin.h"
#include "Utility.h"

// Paladin::Paladin

const std::string& Paladin::getName()
{
    return name;
}

std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
