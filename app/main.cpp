#include <iostream>

#include "myLib.h"
#include "config.hpp"

using namespace std;

int main(){
    std::cout << project_name << std::endl;
    std::cout << project_version << '\n';

    std::cout << project_version_major << '\n';
    std::cout << project_version_minor << '\n';
    std::cout << project_version_patch << '\n';


    display("Hello World");
    return 0;
}
