#include <iostream>
#include <string>
using namespace std;
void convertTime12to24(int, string);
void convertTime24to12(int , string );
void displayChoices();
void getInput(int, int, string, int);
void displayResult(int, int, string, int);
int main(){
    while(1){
int hours, minutes, choice;
string mariediem;
   displayChoices();
   cin>>choice;
    if(choice==1){
        cout<<"Ener time in 12 hour notation"<<endl;
        getInput(hours, minutes, mariediem, choice);
        convertTime12to24( hours, mariediem);
        displayResult( hours, minutes, mariediem, choice);
        

    }
    else if(choice==2){
        cout<<"Enter time in 24 hour notation: "<<endl;
        getInput(hours, minutes, mariediem, choice);
         convertTime24to12(hours, mariediem);
         displayResult( hours, minutes, mariediem, choice);
    }
    else{
        break;
    }
    }


}
void getInput(int hours, int minutes, string mariedem, int choice){
cout<<"Enter the hours(0-23)for 24 hour notation, and (0-12) for 12 hour notation: "<<endl;
cin>>hours;
if(choice==1 && (hours<0 || hours>23)){
   cout<<"Invalid input! , run program again"<<endl;
   exit(0);
}
else if(choice==2 && (hours<0 || hours>12)){
    cout<<"Invalid input! Run program again"<<endl;
    exit(0);
}
cout<<"Enter the minutues: "<<endl;
cin>>minutes;
if(minutes<0 && minutes>59){
    cout<<"Invalid minutues! Run program again"<<endl;
    exit(0);
}
if(choice==1){
    cout<<"Enter AM or PM: "<<endl;
    cin>>mariedem;
    if(mariedem!= "AM" || mariedem!= "PM"){
        cout<<"Invalid meridiem! Run code again "<<endl;
        exit(0);
    }
}
}
void displayChoices(){
    int choice;
    cout<<"Enter (1) to convert time from 12 to 24 hours notation: "<<endl;
    cout<<"Enter (2) to convert time from 24 to 12 hours notation: "<<endl;
    cin>>choice;

}
void convertTime12to24(int hours, string mariedem){
  if(mariedem=="AM" && hours==12){
    hours=0;
  }
  else if(mariedem=="PM" && hours!=12){
   hours=hours+12;
  }
}

void convertTime24to12(int hours, string mariedem){
if(hours==0){
    hours=12;
    mariedem="AM";
}
else if(hours==12){
    mariedem="PM";
}
else if(hours>12){
    hours=hours-12;
    mariedem="PM";
}
else
mariedem="AM";
}

void displayResult(int hours, int minutes, string mariedem, int choice){
   cout<<"The time in ";
   if(choice==1){
    cout<<"12 hour notation: ";
    if(hours==0){
        cout<<"12: "<<minutes<<"AM"<<endl;
    }
    else if(hours==12){
        cout<<"12: "<<minutes<<"PM"<<endl;
    }
    else if(hours>12){
        cout<<hours-12<<minutes<<"PM"<<endl;
    }
    else{
        cout<<hours<<":"<<minutes<<"PM"<<endl;
    }
   }

   else{
    cout<<"24 hour notation: ";
    if(hours<10){
        cout<<"0"<<hours;
    }
    else{
        cout<<hours;

    }
    cout<<":";
    if(minutes<10){
        cout<<"0"<<minutes<<endl;
    }
    else 
    cout<<minutes;
   }
   cout<<endl;
}
