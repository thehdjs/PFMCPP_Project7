#pragma once

#include "Item.h"
#include "Dwarf.h"
#include "Character.h"
#include "Paladin.h"
#include "DragonSlayer.h"
#include "Dragon.h"

struct HelpfulItem : public Item
{
    HelpfulItem() : Item("helpful item", 2) { }
    void use(Character*) override;
};

