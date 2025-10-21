#include <iostream>

int main (){

    int temp;
    bool sunny;


    std::cout << "Enter the temperature: " << std::endl;
    std::cin >> temp;

    if(temp > 0 && temp < 30){
        std::cout << "Tolerable" << std::endl;
    }

    else{
        std::cout << "Intolerable " << std::endl;
    }


    if (!sunny){
        std::cout << "It is sunny outside" << std::endl;
    }
    else{
        std::cout << "It is cloudy outside" << std::endl;
    }

    return 0;
}