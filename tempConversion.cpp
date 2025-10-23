#include <iostream>

int main (){

    double temp;
    char unit;

    std::cout << "================TEMPERATURE====================" << std::endl;
    std::cout << "F = Fahrenheit" << std::endl;
    std::cout << "C = Celsius" << std::endl;
    std::cout << "What unit you would like to convert to?: "  << std::endl;
    std::cin >> unit;

    if (unit == 'f' || unit == 'F'){
         std::cout << "Enter the temperature that you would like to convert to Fahrenheit" << std::endl;
         std::cin >> temp;

         temp = (1.8 * temp) + 32.0;
         std::cout << "The temperature is " << temp << " C"  << std::endl;
    }
    else if (unit == 'c' || unit == 'C'){
        std::cout << "Enter the temperature that you would like to convert to Celsius" << std::endl;
        std::cin >> temp;

        temp = (temp - 32) / 1.8;           
        std::cout << "The temperature is " << temp << " F"  << std::endl;

    }

    else {
        std::cout << "Please enter another char for the units" << std::endl;
    }
    std::cout << "===============================================";

    return 0;
}