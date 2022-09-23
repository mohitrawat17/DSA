#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int ar[10];

    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
  
    int min=ar[0];
    int max=ar[0];
  // for minimum
    for(int i=0;i<n;i++){
       if(ar[i]<min){
        min=ar[i];
       }
    }


  // for maximum
     for(int i=0;i<n;i++){
       if(ar[i]>max){
        max=ar[i];
       }
    }

    cout<<"Minimum element is : "<<min<<endl;
    cout<<"Maximum element is : "<<max<<endl;


    return 0;
}