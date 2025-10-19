#include <iostream>

int main(){

    char op;
    double n1;
    double n2;
    double result;

    std::cout << "***************CALCULATOR***************" << std::endl;

    std::cout << "Enter either (+ - * /): ";
    std:: cin >> op;

    std::cout << "Enter #1: ";
    std::cin >> n1;

    std::cout << "Enter #2: ";
    std::cin >> n2;

    switch (op)
    {
    case '+':
        result = n1 + n2;
        std::cout << "Result is: " << result << std::endl;
        break;
    case '-':
        result = n1 - n2;
        std::cout << "Result is: " << result << std::endl;
        break;
    case '*':
        result = n1 * n2;
        std::cout << "Result is: " << result << std::endl;
        break;
    case '/':
        result = n1 / n2;
        std::cout << "Result is: " << result << std::endl;
        break;
    default:
    std::cout << "ERROR: Type one of the following symbols (+ - * /)" << std::endl;
        break;
    }

    std::cout << "****************************************";
    return 0;
}