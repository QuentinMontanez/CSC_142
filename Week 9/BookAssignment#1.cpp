#include <iostream>


enum class Operation
{
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
};

class Calculator
{
public:
    Calculator()
    {
        std::cout << "This should not be called.\n";
    }

    Calculator(Operation operation);
    int calculate(int a, int b);

    Operation get_operation()
    { return m_operation; }

private:
    Operation m_operation;
};

Calculator::Calculator(Operation operation)
    : m_operation{operation} { }

int Calculator::calculate(int a, int b)
{
    switch(get_operation())
    {
        case Operation::ADD: {
            return a + b;
        }

        case Operation::SUBTRACT: {
            return a - b;
        }

        case Operation::MULTIPLY: {
            return a * b;
        }

        case Operation::DIVIDE: {
            return a / b;
        }

        default: {
            std::cout << "Not an operator I know of.\n";
            break;
        }
    }
}

int main()
{
    Calculator calc1 = { Operation::ADD };
    std::cout << "ADD: " << calc1.calculate(8, 10) << '\n';

    Calculator calc2{ Operation::SUBTRACT }; 
    std::cout << "SUBTRACT: " << calc2.calculate(9, 2) << '\n';

    Calculator calc3(Operation::MULTIPLY);
    std::cout << "MULTIPLY: " << calc3.calculate(5, 7) << '\n';

    Calculator oopsCalc4(); 

    return 0;
}