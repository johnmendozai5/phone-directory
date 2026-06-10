#include <iostream>

int main(){
    int areaCode, prefix, linNumber;

    // READ THREE INTS FROM INPUT
    std::cin >> areaCode >> prefix >> linNumber;

    // PRINT THE TWO HEADING LINES

    std::cout << "Country  Phone Number" << std::endl;
    std::cout << "-------  ------------" << std::endl;

    // PRINT THE U.S LINE
    std::cout << "U.S.    +1 (" << areaCode << ")" << prefix << "-" << linNumber << std::endl;



}