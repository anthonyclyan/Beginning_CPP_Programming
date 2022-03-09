#ifndef _FRIEND_CLASS_H_
#define _FRIEND_CLASS_H_
#include <string>
#include "Player.h"

class Friend_class
{
public:
    void set_hero_name(Player &p, std::string name);
    void display_player(Player &p);
};

#endif // _FRIEND_CLASS_H_
