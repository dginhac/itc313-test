#include <iostream>
#include "date.h"

int main()
{
    for (auto i=0; i<10; i++) {
        std::cout << "Hello World: " << i << std::endl; 
    }
    std::cout << "Bye!" << std::endl;
    
    Date d(1, 1, 2019);
    std::cout << d << std::endl;
    return 0;
}