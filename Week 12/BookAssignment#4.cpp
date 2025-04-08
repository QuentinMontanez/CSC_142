#include "PrimeNumberRange.h"
#include "FibonacciIterator.h"
#include "FibonacciRange.h"

#include <iostream> 
#include <cstdio>

int main() {

    
    std::cout << "Fibonacci: ";
    for (const auto &i : FibonacciRange({ 5000 })) { 
        std::cout << i << ' ';
    }
    
    std::cout << "\n\n";
    
    PrimeNumberRange prime{ 5000 };
    
    std::cout << "Prime: ";
    std::cout << prime.getCurrent() << ' ';
    
    while (true) {
        int n = ++prime; 
        if (n < 0)
            return 0;
        std::cout << n << ' ';
    }

    return 0;
}


void printFibonacciRange() {
    FibonacciRange range{ 5000 };
    const auto end = range.end();
    for (auto x = range.begin(); x != end; ++x) {
        const auto i = *x;
        printf("%d ", i);
    }
}

