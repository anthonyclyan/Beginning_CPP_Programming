// Section 13
// Access Modifers
#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    // attributes
    string name {"Player"};
    int health;
    int xp;
public:
    // methods
    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl;  }
    bool is_dead();
};

int main() {
    Player frank;
  //  frank.name = "Frank";
  //  cout << frank.health << endl;
  frank.talk("Hello there");
    return 0;
}

