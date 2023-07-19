#include<iostream>
#include<math.h>
using namespace std;
int main(){
int bin;
cout<<"Enter binary number: ";
cin>>bin;
int dec=0;
int bit;
int i=0;
int digit;

while(bin!=0){
digit=bin%10;
digit=bin&1;
dec=(pow(2,i) * digit) + dec;
i++;
bin=bin/10;
}
cout<<"Decimal value is : "<<dec;
return 0;
}