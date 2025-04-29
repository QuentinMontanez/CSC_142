#include <iostream>
#include <cstring>

int main(int argc, char** argv) {
    for (int i = 1; i < argc; i++) { 
        std::size_t count = std::strlen(argv[i]);

        std::cout << "Argument #" << i << ": ";
        for (std::size_t k = 0; k < count; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
