#include <iostream>
#include <string>

int main()
{
    std::cout << "你好"<<std::endl;
    std::string Path;
    std::getline(std::cin, Path);
    std::cout << Path << std::endl;
}