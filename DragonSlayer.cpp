#include "DragonSlayer.h"
#include "Dragon.h"
#include "Utility.h"

DragonSlayer::DragonSlayer(std::string entity_name, int hp, int armor) : Character(hp, armor, 4), name(entity_name)
{
    defensiveItems = makeDefensiveItems(7);
    helpfulItems = makeHelpfulItems(2);
}

const std::string& DragonSlayer::getName()
{
    return name;
}

void DragonSlayer::attack(Character& other)
{
    //attackItem.use(this);
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if( auto* dragon = dynamic_cast<Dragon*>(&other) )
    {
        //assert(false);
        //DragonSlayers get a 10x boost when attacking dragons, from their attack item.
        //so they should USE their attack item before attacking the dragon... 
        //note that items are single-use only, so you need to reset it after use.  
        //look in the Character class for how the other item types are reset after use.
        
         for( auto& item : attackItems )
        {
            if( auto* attackItem1 = dynamic_cast<AttackItem*>(item.get()) )
            {
                attackItem1->use(this);
                item.reset(); //can only be used once!
                break;
            }
        }

    while( dragon->getHP() > 0 )
        {
            dragon->takeDamage(attackDamage);
        }
    }
        
    Character::attack(other);
        
}

std::string DragonSlayer::getStats()
{
    return getCharacterStats(this);
}
