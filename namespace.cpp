#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main(){
    using namespace first;
    using std::cout;
    using std::string;
    
    string name = "André";

    cout << x << std::endl;
    cout << second::x << std::endl;
   

return 0;
}