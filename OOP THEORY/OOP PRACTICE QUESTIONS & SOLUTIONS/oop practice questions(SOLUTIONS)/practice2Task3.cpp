#include <iostream>
using namespace std;
struct dateType{
    int day; 
    int month;
    int year;
};
int main(){
    dateType date;
    cout<<"Enter day: "<<endl;
    cin>>date.day;
    cout<<"Enter month: "<<endl;
    cin>>date.month;
    cout<<"Enter year: "<<endl;
    cin>>date.year;

    cout<<date.month<<"/"<<date.day<<"/"<<date.year<<endl;
}