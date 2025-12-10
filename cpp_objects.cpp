//
// Created by gasin on 11/29/2025.
//
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
public:
    //attributes
    string name{"Player"};
    int health{100};
    int xp{3};

    //methods
    void talk(string text) {
        cout << name << " says " << text << endl;
    }

    bool is_dead();
};

class Account {
public:
    //attributes
    string name{"Account"};
    double balance{0.0};

    //methods
    bool deposit(double bal) { balance += bal; cout<<" in deposit " << endl;}

    bool withdraw(double bal) { balance -= bal; cout<<"In withdraw "<<endl;}
};

int main() {
    Account frank_account;
    frank_account = "frank's accoynty"
    Account jim_account;

    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi");

    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 100;
    enemy->talk("I will destroy you");

    Player hero;

    Player players[]{frank, hero};

    vector<Player> player_vec{frank};
    player_vec.push_back(hero);


    // Player *enemy{nullptr};
    // enemy = new Player();

    delete enemy;


    return 0;
}
