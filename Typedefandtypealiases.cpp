#include <iostream>
#include <vector>
  
typedef std::vector<std::pair<std::string, int> > pairlist_t;
typedef std::string text_t;
typedef int number_t;

int main(){

text_t firstname = "Bright";
number_t age = 10;

std::cout << firstname << '\n';
std::cout << age << '\n';


    return 0;
}