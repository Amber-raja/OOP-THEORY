#include <iostream>
using namespace std;
class employee
{
private:
   int employeeNum;
   float compensation;

public:
   employee()
   {
      employeeNum = 0;
      compensation = 0.0;
   }
   void enterData()
   {

      cout << "Enter employee number: " << endl;
      cin >> employeeNum;
      getchar();
      cout << "Enter employee's compensation: " << endl;
      cin >> compensation;
   }
   void displayData()
   {
      cout << "Employee Data: " << endl;

      cout << "Employee number: " << employeeNum << endl;
      cout << "Employee's compensation: " << compensation << endl;
      cout << endl;
   }
};

int main()
{
   employee employees[3];

   for (int i = 0; i < 3; i++)
   {
      cout << "Enter data for employee: " << i + 1 << endl;
      employees[i].enterData();
   }

   for (int i = 0; i < 3; i++)
   {
      cout << "Display Employee Data: " << endl;
      employees[i].displayData();
   }

   return 0;
}