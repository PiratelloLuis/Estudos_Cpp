#include <iostream>
#include <cmath>
int main(){

    double x =  3.9;
    double y = 4;
    double z;

    //menor
    //z = std::min(x,y);

    //maior
    //z = std::max(x, y);

    //2x2x2x2
    //z = pow(2, 4);

    //raiz quadrada de 9
    //z = sqrt(9);

    //valor absoluto
    //z = abs(-3);

    //arredonda de .1 .4 para baixo e .5 .9 para cima
    //z = round(x);
    
    //arredonda para cima sempre 
    //z = ceil (x);

    //arredonda sempre para baixo
    z = floor(x);

    std::cout << z;
}