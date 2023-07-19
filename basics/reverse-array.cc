#include<iostream>
using namespace std;
int main(){
int arr[5]={1,2,3,4,5};
int s=0;
int e=4;
while(s<=e){
    swap(arr[s],arr[e]);
    s++;
    e--;
}
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
return 0;
}