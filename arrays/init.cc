#include <iostream>
using namespace std;


int main() {
   int n;
   cout<<"Enter size of Array : ";
   cin>>n;
   int a[n];
   
   cout<<"Enter elements of array :";
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   
   for(int i=0;i<n;i++){
       cout<<"Element at index "<<i<<" is "<<a[i]<<endl;
   }

    return 0;
}





// <- array as functions ->


// #include <iostream>
// using namespace std;

// void array(int size){
//     int a[size];
//        cout<<"Enter elements of array :";
//    for(int i=0;i<size;i++){
//        cin>>a[i];
//    }
   
//    for(int i=0;i<size;i++){
//        cout<<"Element at index "<<i<<" is "<<a[i]<<endl;
//    }
// }


// int main() {
   
//    array(2);
//    array(3);
//    array(4);


//     return 0;
// }