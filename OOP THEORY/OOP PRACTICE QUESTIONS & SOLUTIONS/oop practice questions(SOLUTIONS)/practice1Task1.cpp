


#include <iostream>
#include <string>
using namespace std;
int remVowels(string);
int findVowels(char);
int main(){
string str;
cout<<"Enter a string"<<endl;
getline(cin, str);
 remVowels(str);
cout<<"Enter a character: "<<endl;
char c;
cin>>c;
findVowels(c);
}
int findVowels(char y){
if(y=='a'|| y=='A'|| y=='e'|| y=='E'|| y=='i'|| y=='I'|| y=='o'|| y=='O'|| y=='u'|| y=='U'){
    cout<<y<<" is a vowel"<<endl;
}
else
cout<<y<<" is a consonant"<<endl;
}

int remVowels(string x){
 for(int i=0; i<x.length(); i++){
    if(x[i]=='a'|| x[i]=='A'){
        continue;
    }
    else if(x[i]=='e'|| x[i]=='E'){
        continue;
    }
    else if(x[i]=='i'|| x[i]=='I'){
        continue;
    }
    else if(x[i]=='o'|| x[i]=='O'){
        continue;
    }
    else if(x[i]=='u'|| x[i]=='U'){
        continue;
    }
    else
    cout<<x[i];
 }
 cout<<endl;
}
