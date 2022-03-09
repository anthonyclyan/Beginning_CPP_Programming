#include <iostream>
#include "Other_class.h"
#include "Player.h"

void Other_class::display_player(Player &p) {
      std::cout << p.name << std::endl;
      std::cout << p.health << std::endl;
      std::cout << p.xp << std::endl; 
   }

