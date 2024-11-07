#include <iostream>

int main(){
    // testing the spaceship operator
    auto result = (10 <=> 20) > 0;
    std::cout << result << std::endl;
}