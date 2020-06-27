#pragma once

#include "Item.h"
/*#include "Dwarf.h"
#include "Character.h"
#include "Paladin.h"
#include "DragonSlayer.h"*/

struct HelpfulItem : Item
{
    HelpfulItem() : Item("helpful item", 2) { }
    void use(Character*) override;
};

