#include<iostream>
using namespace std;

void bubbleSort(int* arr, int n){
for(int i=1;i<n;i++){
    int temp=arr[i];
    int j=i-1;
    for(;j>=0;j--){
        if(temp<arr[j]){
            arr[j+1]=arr[j];
        }
        else{
            break;
        }
        
    }
    arr[j+1]=temp;
}
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