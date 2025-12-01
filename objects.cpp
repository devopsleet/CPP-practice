//
// Created by gasin on 11/30/2025.
//
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
public:
    //attributes

    string name;
    int health;
    int xp;

    //methods

    void talk(string);

    bool is_dead();
};

class Account {
public:
    // attributes
    string name{"Account"};

    double balance{0.0};


    //methods
    bool deposit(double);

    bool withdraw(double);
};

int main() {
    Account frank_account;
    Account jim_account;


    Player frank{"Frank", 100, 12};
    // frank.name {"Frank"};
    // frank.health {100};
    // frank.xp {12};

    Player hero;

    Player players[]{frank, hero};

    vector<Player> player_vec{frank};

    player_vec.push_back(hero);

    Player *enemy{nullptr};

    enemy = new Player;

    delete enemy;


    return 0;
}
