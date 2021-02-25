using namespace std;
#include<iostream>
int main(){
int sid,math,chem,phy,eng,obtmarks,avg;
string sname;
cout<<"Enter student ID: "<<endl;
cin>>sid;
cout<<"Enter student name: "<<endl;
cin>>sname;
cout<<"Enter  math marks: "<<endl;
cin>>math;
cout<<"Enter Chemistry marks: "<<endl;
cin>>chem;
cout<<"Enter physics marks: "<<endl;
cin>>phy;
cout<<"Enter english marks: "<<endl;
cin>>eng;
obtmarks=math+chem+phy+eng;
avg=obtmarks/4;
cout<<sid<<"  marks:  "<<obtmarks<<"  Average   "<<avg;
if(avg>=90 && avg<=100)
cout<<endl<<"A";
else if(avg>=80 && avg<=89)
cout<<endl<<"B";
else if(avg>=70 && avg<=79)
cout<<endl<<"C";
else if(avg>=60 && avg<=69)
cout<<endl<<"D";
else
cout<<endl<<"F";

}
