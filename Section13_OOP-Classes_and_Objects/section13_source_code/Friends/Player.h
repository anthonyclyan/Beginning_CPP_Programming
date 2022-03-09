#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

#include "Other_class.h"
class Friend_class;

class Player {
    friend void Other_class::display_player(Player &p);
    friend void display_player(Player &p);
    friend class Friend_class;
private:
   static int num_players;
   std::string name;
   int health;
   int xp;
public:
    std::string get_name() { return name; }
    int get_health() { return health; }
    int get_xp() {return xp; } 
    Player(std::string name_val ="None", int health_val = 0, int xp_val = 0);
    // Copy constructor
    Player(const Player &source);
    // Destructor
    ~Player();
    
    static int get_num_players();
    
};

#endif // _PLAYER_H_
