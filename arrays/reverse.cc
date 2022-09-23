#include <iostream>
using namespace std;


void reverse(int a[],int size){
int start=0,end=size-1;
while(start<=end){

   int temp;
   temp=a[start];
   a[start]=a[end];
   a[end]=temp;

    start++;
    end--;
}
}


void printArray(int a[],int n){
      for (int i = 0; i < n; i++)
    {
        cout<< a[i]<<" ";
    }

}




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

    reverse(ar,n);
   printArray(ar,n);


    return 0;
}












// < ----        without swapping      ---- >

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter size of array : ";
//     cin >> n;
//     int ar[10];

//     cout << "Enter elements : ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> ar[i];
//     }

//      for (int i = n-1; i>=0; i--)
//     {
//         cout<<ar[i]<<" ";
//     }


//     return 0;
// }
  