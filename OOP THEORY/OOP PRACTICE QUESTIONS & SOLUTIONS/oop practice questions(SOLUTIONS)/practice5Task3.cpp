
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class dateType {
private:
    int dMonth;
    int dDay;
    int dYear;

public:
    dateType(int month = 4, int day = 19, int year = 2002);
    void setDate(int month, int day, int year);
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    void printDate() const;
    bool isLeapYear() const;
    int daysInMonth() const;
    int daysPassed() const;
    int daysRemaining() const;
    void addDays(int numDays);
};

dateType::dateType(int month, int day, int year) {
    setDate(month, day, year);
}

void dateType::setDate(int month, int day, int year) {
    if (month >= 1 && month <= 12) {
        dMonth = month;
    }
    else {
        dMonth = 1;
    }
    if (day >= 1 && day <= 31) {
        dDay = day;
    }
    else {
        dDay = 1;
    }
    if (year >= 1900) {
        dYear = year;
    }
    else {
        dYear = 1900;
    }
}

int dateType::getDay() const {
    return dDay;
}

int dateType::getMonth() const {
    return dMonth;
}

int dateType::getYear() const {
    return dYear;
}

bool dateType::isLeapYear() const {
    if (dYear % 400 == 0 || (dYear % 4 == 0 && dYear % 100 != 0)) {
        return true;
    }
    else {
        return false;
    }
}

int dateType::daysRemaining() const {
    int days = 0;
    for (int i = dMonth + 1; i <= 12; i++) {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
            days += 31;
        }
        else if (i == 4 || i == 6 || i == 9 || i == 11) {
            days += 30;
        }
        else if (isLeapYear() && i == 2) {
            days += 29;
        }
        else {
            days += 28;
        }
    }
    days += daysInMonth() - dDay;
    return days;
}

int dateType::daysInMonth() const {
    if (dMonth == 1 || dMonth == 3 || dMonth == 5 || dMonth == 7 || dMonth == 8 || dMonth == 10 || dMonth == 12) {
        return 31;
    }
    else if (dMonth == 4 || dMonth == 6 || dMonth == 9 || dMonth == 11) {
        return 30;
    }
    else if (isLeapYear() && dMonth == 2) {
        return 29;
    }
    else {
        return 28;
    }
}

void dateType::addDays(int numDays) {
    int days = daysPassed() + numDays;
    dMonth = 1;
    dDay = 1;

    while (days > 0) {
        if (days > daysInMonth()) {
            days -= daysInMonth();
            dMonth++;
            if (dMonth > 12) {
                dMonth = 1;
                dYear++;
            }
        }
        else {
            dDay = days;
            days = 0;
        }
    }
}

int dateType::daysPassed() const {
    int days = 0;
    for (int i = 1; i < dMonth; i++) {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
            days += 31;
        }
        else if (i == 4 || i == 6 || i == 9 || i == 11) {
            days += 30;
        }
        else if (isLeapYear() && i == 2) {
            days += 29;
        }
        else {
            days += 28;
        }
    }
    days += dDay;
    return days;
}

void dateType::printDate() const {
    cout << dMonth << "/" << dDay << "/" << dYear;
}

int main() {
    cout << "Enter a date in the format mm-dd-yyyy: ";
    int month, day, year;
    char c;
    cin >> month >> c >> day >> c >> year;
    dateType date1(month, day, year);

    cout << "The date you entered is: " << endl;
    date1.printDate();
    cout << endl;
    cout << "The number of days in the month is: " << date1.daysInMonth() << endl;
    cout << "The date is a leap year: " << (date1.isLeapYear() ? "Yes" : "No") << endl;
    cout << "The number of days passed in the year is: " << date1.daysPassed() << endl;
    cout << "The number of days remaining in the year is: " << date1.daysRemaining() << endl;

    cout << "Enter the number of days to add to the date: ";
    int numofDays;
    cin >> numofDays;
    date1.addDays(numofDays);

    cout << "The new date is: ";
    date1.printDate();

    return 0;
}
