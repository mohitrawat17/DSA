#include<iostream>
using namespace std;


int setBitsA(int m){
    int count1=0;
while(m!=0){
if(m&1){
count1=count1+1;
}
m=m>>1;
}
return count1;
}


int setBitsB(int n){
    int count2=0;
while(n!=0){
if(n&1){
count2=count2+1;
}
n=n>>1;
}
return count2;
}



int main(){

int a=2,b=3;

int count;
count=setBitsA(a)+setBitsB(b);
cout<<count;

return 0;
}