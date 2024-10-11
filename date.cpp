#include "date.h"

Date::Date(int month, int day) : _month(month), _day(day) {}
int Date::month() const { return _month; }
int Date::day() const { return _day; }
