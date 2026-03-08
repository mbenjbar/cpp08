#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    
    std::cout << "20 in vector? " << easyfind(vec, 20) << std::endl;
    std::cout << "25 in vector? " << easyfind(vec, 25) << std::endl;

    return 0;
}