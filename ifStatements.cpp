#include <iostream>

int main(){

    int age;

    std::cout << "Enter your age: " << std::endl;
    std::cin >> age; 

    if (age < 18)
    {
        std::cout << "You can't access the system because you're too young";
    }

    else if (age < 21)
    {
        std::cout << "Welcome to the system, but you can't drink anything alcoholic okay?? XD";
    }
    else
    {
        std::cout << "Welcome to the system! All permissions granted!!";
    }


    return 0;
}