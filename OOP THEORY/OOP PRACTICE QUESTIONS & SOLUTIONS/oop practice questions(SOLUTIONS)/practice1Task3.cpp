
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
string employeeName;
double grossAmount, federalTax, stateTax, socialSecurityTax, medicareTax, pensionPlan, healthInsurance, netPay;



cout << "Enter employee name: ";
getline(cin, employeeName);
cout << "Enter gross amount: $";
cin >> grossAmount;


federalTax = grossAmount * 0.15;
stateTax = grossAmount * 0.035;
socialSecurityTax = grossAmount * 0.0575;
medicareTax = grossAmount * 0.0275;
pensionPlan = grossAmount * 0.05;
healthInsurance = 75.00;
netPay = grossAmount - federalTax - stateTax - socialSecurityTax - medicareTax - pensionPlan - healthInsurance;


cout << fixed << setprecision(2);
cout << endl << employeeName << endl;
cout << "Gross Amount: " << grossAmount << endl;
cout << "Federal Tax: " <<  federalTax << endl;
cout << "State Tax: " <<  stateTax << endl;
cout << "Social Security Tax: " <<  socialSecurityTax << endl;
cout << "Medicare/Medicaid Tax: " <<   medicareTax << endl;
cout << "Pension Plan: " << pensionPlan << endl;
cout << "Health Insurance: " << healthInsurance << endl;
cout << "Net Pay: " <<netPay << endl;

return 0;

}