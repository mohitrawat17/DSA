#include<iostream>
using namespace std;


int pivot(int arr[], int n){
int lb=0;
int ub=n-1;
int mid=lb+(ub-lb)/2;

while(lb<ub)
{
    if(arr[mid]>=arr[0]){
lb=mid+1;
}
else{
ub=mid;
}
mid=lb+(ub-lb)/2;
}
return lb;
}
int main(){
int size=5;    
int ar[size]={7,9,2,3,4};
cout<<"Pivot element is : "<<pivot(ar,size);
return 0;
}