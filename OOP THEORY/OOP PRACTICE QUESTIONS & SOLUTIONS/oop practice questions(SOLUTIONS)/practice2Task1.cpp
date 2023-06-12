#include <iostream>
using namespace std;
struct employeeType{
    int employeeNum;
    float compensation;
};
int main(){
    employeeType emp1;
    employeeType emp2;
    employeeType emp3;
    cout<<"Enter employee number: "<<endl;
    cin>>emp1.employeeNum;
    cout<<"Enter employees compensation: "<<endl;
    cin>>emp1.compensation;
     cout<<"Enter employee number: "<<endl;
    cin>>emp2.employeeNum;
    cout<<"Enter employees compensation: "<<endl;
    cin>>emp2.compensation;
     cout<<"Enter employee number: "<<endl;
    cin>>emp3.employeeNum;
    cout<<"Enter employees compensation: "<<endl;
    cin>>emp3.compensation;

    cout<<"Employee num: "<<emp1.employeeNum<<endl;
    cout<<"Compensation: "<<emp1.compensation<<endl;

    cout<<"Employee num:file: "<<emp2.employeeNum<<endl;
    cout<<"Compensation: "<<emp2.compensation<<endl;
    cout<<"Employee num: "<<emp3.employeeNum<<endl;
    cout<<"Compensation: "<<emp3.compensation<<endl;

}