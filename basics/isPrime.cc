#include <iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main() {
  
int num;
cout<<"Enter a Number : ";
cin>>num;

if(isPrime(num)){
    cout<<"The number "<<num<< " is prime number";
}
else{
    cout<<"The number "<<num << " is not a prime number" ;
}


    return 0;
}