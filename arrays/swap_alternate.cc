#include<iostream>
using namespace std;
int main(){
int arr[8]={5,2,9,4,7,6,1,0};
int n=8;
for(int i=0;i<(n-1);i+=2){
    int j=i+1;
    swap(arr[i],arr[j]);
}

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}