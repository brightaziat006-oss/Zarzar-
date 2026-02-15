#include <iostream>

namespace first { int x = 1; }
namespace second { int x = 2;}
namespace third { int x = 3;}

int main(){

using namespace second;

std::cout << x <<"\n";



    return 0;
}