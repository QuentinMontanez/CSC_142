#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rollDice(int sides) {
    return (rand() % sides) + 1;
}

int main() {
    srand(time(0));  // Seed random number generator

    int savior_HP = 20, savior_AC = 15;
    int slime_HP = 10, slime_AC = 12;

    cout << "Combat begins between Savior and the Evil Slime!\n\n";

    while (savior_HP > 0 && slime_HP > 0) {
    
        cout << "-- Savior's turn --\n";
        int savior_roll = rollDice(20);
        cout << "Savior rolls a " << savior_roll;
        if (savior_roll >= slime_AC) {
            int savior_damage = rollDice(8);
            slime_HP -= savior_damage;
            cout << " and hits the Evil Slime!\n";
            cout << "Savior deals " << savior_damage << " damage. ";
            cout << "Evil Slime has " << (slime_HP > 0 ? slime_HP : 0) << " HP remaining.\n\n";
        } else {
            cout << " and misses!\n\n";
        }

        if (slime_HP <= 0) break;

        
        cout << "-- The Evil Slime's turn --\n";
        int slime_roll = rollDice(20);
        cout << "Evil Slime rolls a " << slime_roll;
        if (slime_roll >= savior_AC) {
            int slime_damage = rollDice(6);
            savior_HP -= slime_damage;
            cout << " and hits!\n";
            cout << "The Evil Slime deals " << slime_damage << " damage. ";
            cout << "Savior has " << (savior_HP > 0 ? savior_HP : 0) << " HP remaining.\n\n";
        } else {
            cout << " and misses!\n\n";
        }
    }

    if (savior_HP > 0) {
        cout << "The Evil Slime is defeated! Savior wins the battle!\n";
    } else {
        cout << "Savior has fallen! The Evil Slime wins the battle!\n";
    }

    return 0;
}
