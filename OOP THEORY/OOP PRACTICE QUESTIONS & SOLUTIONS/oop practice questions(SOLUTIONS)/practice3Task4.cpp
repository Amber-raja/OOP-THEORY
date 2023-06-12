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
    dateType empStartdate;
};

int main()
{
    employee employees[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter employee number: " << endl;
        cin >> employees[i].employeeNum;
        cout << "Enter employee's compensation: " << endl;
        cin >> employees[i].compensation;
        // cout<<"Enter employee's employment type: "<<endl;
        // cin>>employees[i].empType;
        cout << "Enter start date of employment: " << endl;
        cin >> employees[i].empStartdate.month >> employees[i].empStartdate.day >> employees[i].empStartdate.year;
    }
    cout << "Employee Data: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Employee #: " << i + 1 << endl;
        cout << "Employee number: " << employees[i].employeeNum << endl;
        cout << "Employee's compensation: " << employees[i].compensation << endl;
        cout << "Employee Type: " << employees[i].empType << endl;
        cout << "Start Date: " << employees[i].empStartdate.month << "/" << employees[i].empStartdate.day << "/" << employees[i].empStartdate.year << endl;
        cout << endl;
    }
    return 0;
}