#include<iostream>
using namespace std;

void bubbleSort(int* arr, int n){
for(int i=0;i<n-1;i++){
    cout<<i<<"Round"<<endl;
    for(int j=0;j<n-i-1;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
      }

  cout<<j<<" iteration "<<endl;
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
      cout<<endl;
    }
}
cout<<endl;
}


int main(){
int arr[5]={5,4,3,2,1};
int n=5;
cout<<"---ITERATIONS---"<<endl;
bubbleSort(arr,n);
cout<<"---RESULT---"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}