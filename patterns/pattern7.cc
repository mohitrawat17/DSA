#include<iostream>
using namespace std;

int main(){


    int i = 1;
   while(i<=5){



    int j=1;
    while(j<=6-i){
        cout<<j;
        j++;
    }


int k=1;
while(k<=2*(i-1)){
    cout<<"*";
    k++;
}




int l=5;
while(l>=i){
    cout<<l-i+1;
    l--;
}



    i++;
    cout<<endl;
   }

    return 0;
}

