#include "item2.hpp"

int main() {
    TextBook tb("hello");
    tb[0] = 'c'; 
    std::cout << tb[0] << std::endl;
    return 0;
}