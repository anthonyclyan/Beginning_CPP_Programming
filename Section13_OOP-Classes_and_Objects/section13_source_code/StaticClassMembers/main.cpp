// Section 13
// Static class members
#include <iostream>
#include "Player.h"

using namespace std;

// helper function
void display_active_players() {
    cout << "Active players: " << Player::get_num_players() << endl;
}

int main() {
    display_active_players();           // Output: 0
    Player hero{"Hero"};
    display_active_players();           // Output: 1
    
    {
        Player frank{"Frank"};
        display_active_players();       // Output: 2
    }
    display_active_players();           // Output: 1
    
    Player *enemy = new Player("Enemy", 100, 100);
    display_active_players();           // Output: 2
    delete enemy;
    display_active_players();           // Output: 1



    return 0;
}

