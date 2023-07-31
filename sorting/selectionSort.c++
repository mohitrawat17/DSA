#include<iostream>
using namespace std;

void selectionSort(int* arr, int n){
  
for(int i=0;i<n-1;i++){
      int min=i;
    for(int j=i+1;j<n;j++){
        if(arr[min]>arr[j]){
            min=j;
        }
    }
    swap(arr[i],arr[min]);
    cout<<i<<" iteration "<<endl;
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
}


int main(){
int arr[5]={6,98,11,1,9};
int n=5;
cout<<"---ITERATIONS---"<<endl;
selectionSort(arr,n);
cout<<"---RESULT---"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}