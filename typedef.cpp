#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;
using number_t = int;
using text_t = std::string;
int main(){

    text_t name = "Andre";
    number_t age = 22;
    std::cout << name << std::endl;
    std::cout << age;
    //pairlist_t pairlist;

    return 0;
}