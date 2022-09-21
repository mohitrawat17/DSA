#include<iostream>
#include<math.h>
using namespace std;


int main(){
int n,bit,result=0,i=0;
cout<<"Enter Binary number : ";
cin>>n;

while(n!=0){
   bit=n%10;
   result=(bit*pow(2,i))+result;
  n=n/10;
  i++;
}
cout<<"Decimal number is : "<<result;
return 0;
}