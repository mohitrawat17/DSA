#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int ar[n];
    int sum=0;
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        cin>>ar[i];
     
    }
    
    for(int i=0;i<n;i++){
        sum=sum+ar[i];
    }
   
   cout<<"Sum of the array is : "<<sum;
   
    return 0;
}