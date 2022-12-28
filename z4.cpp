#include<iostream>
using namespace std;
main(){

string name;
int sub1marks;
int sub2marks;
int sub3marks;
int sub4marks;
int sub5marks;
int percentage;
cout<<"enter name:";
cin>>name;
cout<<"enter sub1marks:";
cin>>sub1marks;
cout<<"enter sub2marks:";
cin>>sub2marks;
cout<<"enter sub3marks:";
cin>>sub3marks;
cout<<"enter sub4marks:";
cin>>sub4marks;
cout<<"enter sub5marks:";
cin>>sub5marks;
percentage=(sub1marks+sub2marks+sub3marks+sub4marks+sub5marks)*100/500;
cout<<"percentage marks:"<<percentage<<endl;

}