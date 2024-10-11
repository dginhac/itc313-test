#include <iostream>
#include "date.h"

int main() {
    Date today(10,11);
    std::cout << "today: " << today.month() << "/" << today.day() << std::endl;
}
