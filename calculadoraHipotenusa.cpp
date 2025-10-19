#include <iostream>
#include <cmath>

int main()
{   
    using std::cout;
    using std::endl;
    using std::cin;


  
    cout << "Digite o valor de A do triangulo: " << endl;
    double a;
    cin >> a;


    cout << "Digite o valor de B do triangulo: " << endl;
    double b;
    cin >> b;   



    cout << a << " , " << b << endl;

    double c;
    c = sqrt(pow(a, 2)+ pow(b, 2));

    cout << "O total da hipotenusa deste triangulo é: " << c << endl;
    return 0;
}