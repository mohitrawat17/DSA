// vector is a dynamic array
// vector doubles its size while adding extra elements in it
#include<vector>
#include<iostream>
using namespace std;
int main(){

//initializing of vector
vector<int> v;
// capacity states that how much space is available in vector
cout<<"capacity : "<<v.capacity()<<endl;

// initializing all elements with same number
vector<int> v1(3,1);
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<endl;
}

//adding elements in it
v.push_back(3);
cout<<"capacity : "<<v.capacity()<<endl;

v.push_back(4);
cout<<"capacity : "<<v.capacity()<<endl;

//vector doubles its size
v.push_back(9);
cout<<"capacity : "<<v.capacity()<<endl;

// print vector
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}

cout<<"first element : "<<v.front()<<endl;
cout<<"last element : "<<v.back()<<endl;        // same as arrays stl


// copying elements of one vector to other
vector<int> v2(v);
for(int i=0;i<v2.size();i++){
    cout<<v2[i]<<endl;
}



// pop last element
v.pop_back();

for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}

// to clear vector
v.clear();
cout<<"vector after clear :"<<v.size();

return 0;
}