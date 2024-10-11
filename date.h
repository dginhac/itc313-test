class Date {
    public:
        Date(int month, int day);
        int month() const;
        int day() const;
        void updateMonth(int new_month);
        void updateDay(int new_day);
    private:
        int _month;
        int _day;
};

bool isDate(int month, int day);
