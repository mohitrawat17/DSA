#include<iostream>
#include<deque>
using namespace std;
int main(){
deque<int> d;

// adding elements
d.push_back(3);
d.push_back(2);
d.push_front(1);
for(int i:d){
    cout<<i<<" ";
}
cout<<endl;

// deletion of elements
d.pop_back();
d.pop_front();
for(int i:d){
    cout<<i<<" ";
} 
// same functionality as vector

return 0;
}