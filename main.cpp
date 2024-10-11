#include <iostream>
#include "date.h"

int main() {
    Date today(10,11);
    std::cout << "today: " << today.month() << "/" << today.day() << std::endl;
    Date a_day(15,11);
    std::cout << "a_day: " << a_day.month() << "/" << a_day.day() << std::endl;
}
