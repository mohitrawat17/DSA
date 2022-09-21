#include<iostream>
using namespace std;


// program to find the number of 100,50,20,1 notes of a given amount

int main(){
int n;
cout<<"Enter amount : ";
cin>>n;
int r100,r50,r20,r1;


switch(1){

case 1:
r100=n/100;
n=n%100;
cout<<"100 notes are : "<<r100;
cout<<endl;

case 2:
r50=n/50;
n=n%50;
cout<<"50 notes are : "<<r50;
cout<<endl;

case 3:
r20=n/20;
n=n%20;
cout<<"20 notes are : "<<r20;
cout<<endl;

case 4:
r1=n/1;
n=n%1;
cout<<"1 notes are : "<<r1;
cout<<endl;

}


return 0;
}