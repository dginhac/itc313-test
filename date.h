class Date {
    public:
        Date(int month, int day);
        int month() const;
        int day() const;
        bool isDate(int month, int day);
    private:
        int _month;
        int _day;
};
