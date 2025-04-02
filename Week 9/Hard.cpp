#include <iostream>
#include <string>


enum class CharacterClass { OG, BSide, Neo, DSide };


struct Character {
    std::string name;
    CharacterClass type;
    int health;
    float strength;
};


std::string classToString(CharacterClass type) {
    switch(type) {
        case CharacterClass::OG: return "OG";
        case CharacterClass::BSide:    return "B-Sider";
        case CharacterClass::Neo:  return "Neo";
        case CharacterClass::DSide:   return "D-Sider";
        default:                      return "Mysterious AU";
    }
}

int main() {
    
    Character characters[4]{
      
        {"Qaim",  CharacterClass::OG, 123, 78.9f},
        {"Erron", CharacterClass::BSide,    105, 82.4f},
        {"Dan", CharacterClass::Neo,   80, 90.0f},
        {"Zero",   CharacterClass::DSide,    95, 75.5f}
    };

    
    std::cout << "Characters:\n------------\n";
    for (int i = 0; i < 4; i++) {
        std::cout << "Name: " << characters[i].name 
                  << ", Type: " << classToString(characters[i].type)
                  << ", Health: " << characters[i].health
                  << ", Strength: " << characters[i].strength
                  << std::endl;
    }

    
    int sumHealth = 0;
    for (int i = 0; i < 4; i++) {
        sumHealth += characters[i].health;
    }
   
    float avgHealth = static_cast<float>(sumHealth) / 4.0f;
    
    std::cout << "\nAverage Health: " << avgHealth << std::endl;


    return 0;
}