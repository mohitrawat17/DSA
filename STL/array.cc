#include<iostream>
#include<array>
using namespace std;
int main(){
// initializing array using stl

array<int,5> arr ={1,2,3,4,5};
int size=arr.size();

for(int i=0;i<size;i++){
cout<<arr[i]<<endl;
}

cout<<"element at index 4 is "<<arr.at(4)<<endl;
cout<<"is empty "<<arr.empty()<<endl;
cout<<"first element is "<<arr.front()<<endl;
cout<<"last element is "<<arr.back()<<endl;
return 0;
}