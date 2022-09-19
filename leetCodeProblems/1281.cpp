#include<iostream>
using namespace std;


int main(){

    int n=697,i,p=1,s=0;
    // cin>>n;
    // cout<<"Enter a number : ";
    while(n!=0){

    i=n%10;

    // sum and product

    p=p*i;
    s=s+i;
// reamining digits 
    n=n/10;

    }

    int d;
    d=p-s;
    cout<<" difference of product and sum is : "<<d;

return 0;
}