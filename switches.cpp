#include <iostream>

int main(){

    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;


    switch(month){
        case 1:
            std::cout << "It is January" << std::endl;
            break;
        case 2:
        std::cout << "It is February" << std::endl;
            break;
          case 3:
            std::cout << "It is March" << std::endl;
            break;
        case 4:
        std::cout << "It is April" << std::endl;
            break;
         case 5:
            std::cout << "It is May" << std::endl;
            break;
        case 6:
        std::cout << "It is June" << std::endl;
            break;
          case 7:
            std::cout << "It is July" << std::endl;
            break;
        case 8:
        std::cout << "It is August" << std::endl;
            break;
         std::cout << "It is June" << std::endl;
            break;
          case 9:
            std::cout << "It is September" << std::endl;
            break;
        case 10:
        std::cout << "It is October" << std::endl;
            break;
        case 11:
            std::cout << "It is November" << std::endl;
            break;
        case 12:
        std::cout << "December" << std::endl;
            break;
        default:
        std::cout << "Please enter only nummbers between 1 and 12";
    }

    return 0;
}