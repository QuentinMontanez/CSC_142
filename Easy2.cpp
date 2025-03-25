#include <iostream>



void drinkPotion(int& hp, int healing) {
    hp += healing;
}



void damageHero(int* hp, int damage) {
    *hp -= damage;
}

int main() {
    int heroHP = 22;

    std::cout << "Hero's starting HP: " << heroHP << std::endl;

    std::cout << "Hero drinks a healing potion (+10 HP)." << std::endl;
    drinkPotion(heroHP, 10);
    std::cout << "Hero's current HP: " << heroHP << std::endl;

    std::cout << "Hero takes damage from a goblin (-7 HP)." << std::endl;
    damageHero(&heroHP, 7);
    std::cout << "Hero's current HP: " << heroHP << std::endl;

    return 0;
}
