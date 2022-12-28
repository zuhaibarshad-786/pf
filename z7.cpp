#include<iostream>
using namespace std;
main(){
string movie;
cout<<"enter movie name:";
cin>>movie;
int adultpriceticket;
int childticketprice;
int adultticketsold;
int childticketsold;
int percentage;
int totalamount;
int amountafterdonation;
cout<<"enter adultpriceticket:";
cin>>adultpriceticket;
cout<<"enter childticketprice:";
cin>>childticketprice;
cout<<"enter adultticketsold:";
cin>>adultticketsold;
cout<<"enter childticketsold:";
cin>>childticketsold;
cout<<"enter percentage to donate:";
cin>>percentage;
totalamount=(adultticketsold*adultpriceticket)+(childticketprice*childticketsold);
cout<<"total amount generated:"<<totalamount<<endl;
amountafterdonation=totalamount-(totalamount*percentage)/100;
cout<<"amount after donation:"<<amountafterdonation<<endl;


}