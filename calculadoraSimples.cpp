#include <iostream>

int main(){
    using std::cout;
    using std::cin;
    using std::endl;
    using std::string;

    int n1;
    int n2;
    int total;
    

    cout << "Digite um número para fazer uma soma" << endl;
    cin >> n1;


    cout << "Digite o segundo número para fazer uma soma" << endl;
    cin >> n2;


    total = n1 + n2;
    cout << "O total da soma é: " <<  total;
    
return 0;
}