#include <iostream>
using namespace std;


void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

void swapAlter(int a[],int n){
    int i;
    for(i=0;i<n;i+=2){
   if(i+1<n){
       int temp;
       temp=a[i];
       a[i]=a[i+1];
       a[i+1]=temp;
   }
    }
}



int main() {
   int ar[10];
   int size;
   cout<<"Enter size of array : ";
   cin>>size;
   
   for(int i=0;i<size;i++){
       cin>>ar[i];
   }
   
swapAlter(ar,size);

cout<<"After swapping alternate elements : ";
print(ar,size);
   
    return 0;
}