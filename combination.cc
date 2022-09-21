#include<iostream>
using namespace std;


int factorial(int f){
    int i;
    int fact=1;
    if(f==0){
return 1;
    }
    for(i=1;i<=f;i++){
        fact=fact*i;
    }
    return fact;
}

int combination(int a,int b){
int first=factorial(a);
int second=factorial(b);
int third=factorial(a-b);

int comb=first/(second*third);

return comb;
}


int main(){

cout<<combination(8,0);
cout<<factorial(0);

return 0;
}