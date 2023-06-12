#include <iostream>
using namespace std;
void getData(char , int , double , int );
int taxAmount(char mstatus, int numChild, double grossIncomePension, int salary);
int main(){
    char mstatus;
    int numChild=0;
      int salary;
    double grossincomepens;
getData(mstatus, numChild, grossincomepens, salary);
double taxA=taxAmount(mstatus, numChild, grossincomepens, salary);
cout<<"Tax: $"<<taxA<<endl;

}
void getData(char mstatus, int numChild, double grossIncomePension, int salary){
    //char mstatus;
    //int salary;
    cout<<"Enter your marital status: "<<endl;
    cin>>mstatus;
    if(mstatus=='m'){
        cout<<"Enter number of childen under the age of 14"<<endl;
        cin>>numChild;

        cout<<"Enter your combined salary: "<<endl;
        cin>>salary;

        cout<<"Percentage of gross income contributed to a pension fund: "<<endl;
        cin>>grossIncomePension;

    }
}
int taxAmount(char mstatus, int numChild, double grossIncomePension, int salary){

double taxExemption;
if(mstatus=='s'){
    taxExemption= 4000;

}
else{
    taxExemption=7000;
}
double taxableAmount;
taxableAmount= salary- ((grossIncomePension/100)*salary)-taxExemption;
int tax;
if(taxableAmount<=15000){
    tax= 0.15*taxableAmount;
}
else if(taxableAmount > 15000 && taxableAmount <= 40000){
    tax=2250+(salary-15000)*0.25;
}
else{
    tax= 8460+ (salary-40000)*0.35;
}
return tax;

}

