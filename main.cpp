#include <iostream>
#include "date.h"

int main() {
    Date a_day(10,11);
    std::cout << "a_day: " << a_day.month() << "/" << a_day.day() << std::endl;
    a_day.updateMonth(9);
    std::cout << "a_day: " << a_day.month() << "/" << a_day.day() << std::endl;
    a_day.updateDay(35);
    std::cout << "a_day: " << a_day.month() << "/" << a_day.day() << std::endl;
}
