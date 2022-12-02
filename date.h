#ifndef DATE_H  
#define DATE_H

#include <iostream>

class Date {
public:
    Date(int year, int month, int day);
    int getYear() const;
    int getMonth() const;
    int getDay() const;
    void setYear(int year);
    void setMonth(int month);
    void setDay(int day);
    friend std::ostream& operator<<(std::ostream& os, const Date& date);
private:
    int _year;
    int _month;
    int _day;
};

#endif
