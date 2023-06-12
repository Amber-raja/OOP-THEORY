#include <iostream>
using namespace std;

enum etype
{
    laborer,
    secretary,
    manager,
    accountant,
    executive,
    researcher
};

struct dateType
{
    int day;
    int month;
    int year;
};

class employee
{
public:
    int employeeNum;
    float compensation;
    etype empType;
    dateType empStartDate;
};

int main()
{
    employee employees[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter employee number: ";
        cin >> employees[i].employeeNum;
        cout << "Enter employee's compensation: ";
        cin >> employees[i].compensation;
        cout << "Enter employee's employment type (0-5): ";
        int empTypeValue;
        cin >> empTypeValue;
        employees[i].empType = static_cast<etype>(empTypeValue);
        cout << "Enter start date of employment (mm dd yyyy): ";
        cin >> employees[i].empStartDate.month >> employees[i].empStartDate.day >> employees[i].empStartDate.year;
        cout << endl;
    }

    cout << "Employee Data:" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "Employee #: " << i + 1 << endl;
        cout << "Employee number: " << employees[i].employeeNum << endl;
        cout << "Employee's compensation: " << employees[i].compensation << endl;
        cout << "Employee Type: " << employees[i].empType << endl;
        cout << "Start Date: " << employees[i].empStartDate.month << "/" << employees[i].empStartDate.day << "/" << employees[i].empStartDate.year << endl;
        cout << endl;
    }

    return 0;
}
