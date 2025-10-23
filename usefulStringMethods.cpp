#include <iostream>

int main(){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);


    if(name.length() > 12){

        std::cout << "Your name can't be over 12 characters" << std::endl;

    }
   else{
       std::cout << "Welcome " << name << std::endl;

   }

    if (name.empty()){
        std::cout << "You didnt enter your name";
    }  

    //limpar string
    //name.clear();
    
    //adiciona uma string no final da sua string
    //name.append("@gmail.com");
    //std::cout<< "your username is now: " << name;


    //verifica qual letra esta no index
    //if (name.at(0) == 'a' || name.at(0) == 'A'){
         //std::cout << "Seu nome começa com a letra errada paizão, perdeu";
    //}

    //insere um char dependendo do index 
   // name.insert(3, "@");
   // std::cout << name;
    
   //deleta de 0-3 por exemplo
   name.erase(0, 3);
    std::cout << name;

    //acha alguma string no seu nome
    //std::cout << name.find(' ');

}