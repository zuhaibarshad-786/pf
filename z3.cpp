#include<iostream>
using namespace std;
main(){

int finalvelocity;
int initialvelocity;
int acceleration;
int time;


cout<<"enter initialvelocity:";
cin>>initialvelocity;
cout<<"enter time:";
cin>>time;
cout<<"enter acceleration:";
cin>>acceleration;
finalvelocity=(acceleration*time)+initialvelocity;
cout<<"final velocity is:"<<finalvelocity<<endl;



}