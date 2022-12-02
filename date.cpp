#include "date.h"

Date::Date(int m, int d, int y)
{
    _month = m;
    _day = d;
    _year = y;
}


int Date::getDay() const
{ 
    return _day;
}
int Date::getMonth() const
{
    return _month;
}
int Date::getYear() const
{
    return _year;
}

void Date::setDay(int d)
{
    _day = d;
}
void Date::setMonth(int m)
{
    _month = m;
}
void Date::setYear(int y)
{
    _year = y;
}

std::ostream& operator<<(std::ostream& os, const Date& date)
{
    os << date._month << "/" << date._day << "/" << date._year;
    return os;
}
