#pragma once

#include "Item.h"

struct AttackItem : public Item
{
    AttackItem() : Item("attack item", 10) { }
    void use(Character*) override;
};
