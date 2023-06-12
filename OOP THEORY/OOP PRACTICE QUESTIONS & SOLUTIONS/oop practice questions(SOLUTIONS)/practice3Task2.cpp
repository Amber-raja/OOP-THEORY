#include <iostream>
using namespace std;
class dateType
{
    int day;
    int month;
    int year;

public:
    void getDate()
    {
        cout << "Enter day: " << endl;
        cin >> day;
        cout << "Enter month: " << endl;
        cin >> month;
        cout << "Enter year: " << endl;
        cin >> year;
    }
    void displayDate()
    {
        cout << month << "/" << day << "/" << year;
    }
};
int main()
{
    dateType date;
    date.getDate();
    date.displayDate();
}