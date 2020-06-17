#include "Dwarf.h"
#include "Utility.h"

const std::string& Dwarf::getName() 
{
  return name; // maybe copy to a new string
}

//Dwarf::Dwarf

std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}

