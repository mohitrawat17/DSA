#include<iostream>
using namespace std;

void binarySearch(int arr[], int size,int x){
int lb=0;
int ub=size-1;
int mid=lb+(ub-lb)/2;


while(lb<=ub){

if(x==arr[mid]){
    cout<<"Element found at location : "<<mid;
    break;
}
else if(x>arr[mid]){

lb=mid+1;
}
else if(x<arr[mid]){
    ub=mid-1;
}
else{
    cout<<"Element not found ! ";
}

mid=lb+(ub-lb)/2;
}

}

int main(){

int n;
cout<<"Enter size of array : ";
cin>>n;
int arr[n];
cout<<"Enter elements of array : ";

for(int i=0;i<n;i++){
cin>>arr[i];
}

int elem;
cout<<"Enter element to search : ";
cin>>elem;

binarySearch(arr,n,elem);
return 0;
}