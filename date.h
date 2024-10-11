class Date {
    public:
        Date(int month, int day);
        int month() const;
        int day() const;
    private:
        int _month;
        int _day;
};

bool isDate(int month, int day);
