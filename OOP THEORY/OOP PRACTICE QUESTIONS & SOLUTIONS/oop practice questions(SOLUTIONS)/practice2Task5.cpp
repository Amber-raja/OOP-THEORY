#include<iostream>
#include<iomanip>
using namespace std;
struct sterling{
    int pounds,shillings,pence;
};
void convert(int a)
{
    sterling amount;
    amount.pounds=a;
    int b=(a-amount.pounds)*20;
    amount.shillings=b;
    int c=(b-amount.shillings)*20;
    amount.pence=c;

    cout<<"£"<<amount.pounds<<"."<<amount.shillings<<"."<<amount.pence<<endl;
}
int main()
{
    int amount;
    cout<<"Enter a money amount in decimal pounds "<<endl;
    cin>>amount;
    convert(amount);
}