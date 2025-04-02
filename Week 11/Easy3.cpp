#include <iostream>

class Slime {
public:

    Slime() {
        std::cout << "A Evil Slime has been summoned!" << std::endl;
    }

    ~Slime() {
        std::cout << "The Evil Slime has been vanquished!" << std::endl;
    }
};

int main() {
    {
        Slime slime; 
    }  

    return 0;
}
