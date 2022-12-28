#include<iostream>
using namespace std;
main(){
int totalveg;
int totalfruit;
float vegetableprice;
float fruitprice;
int totalkilogramvegetable;
int totalkilogramfruit;
float rs=1.94;
float totalharvestprice;
float priceinrs;
cout<<"enter vegetableprice:";
cin>>vegetableprice;
cout<<"enter fruitprice:";
cin>>fruitprice;
cout<<"enter totalkilogramvegetable:";
cin>>totalkilogramvegetable;
cout<<"enter totalkilogramfruit:";
cin>>totalkilogramfruit;
vegetableprice=totalveg*totalkilogramvegetable;
fruitprice=totalfruit*totalkilogramfruit;
totalharvestprice=vegetableprice+fruitprice;
priceinrs=totalharvestprice*rs;
cout<<"price of total harvest in rs:"<<priceinrs<<endl;


}