// Section 13
// Default Constructors
#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
   std::string name;
   int health;
   int xp;
public:

    // no consturctor declared
    // so C++ will default no-args constructors

    void set_name(std::string name_val) { 
        name = name_val; 
    }
    std::string get_name() {
        return name;
    }

    // Declare a constructor
    Player() {
        name = "None";
        health = 100;
        xp = 3;
    }

    // Overloaded constructor
    Player(std::string name_val, int health_val, int xp_val) {
        name = name_val;
        health = health_val;
        xp = xp_val;
    }
    
};

int main() {
    Player hero;
    Player frank {"Frank", 100, 13};
    frank.set_name("Frank");
    cout << frank.get_name() << endl;
    return 0;
}

