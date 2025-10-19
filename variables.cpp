#include <iostream>

int main(){
    //int whole number
    int age = 21;
    int year = 2025;
    int days = 7;

    //double number including decimal
    double price = 10.99;
    double gpa = 2.5;
    double temp = 25.1;

    //char single caracter
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    //boolean true or false
    bool isStudent = true;
    bool power = false;
    bool isforSale = true;

    //string object that represents a sequence of text
    std::string name = "Andre";
    std::string day = "Friday";
    std::string food = "Pizza";
    std::string address = "Rua Vitorio Zanini 161";

    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " Years old.";
    return 0;
}