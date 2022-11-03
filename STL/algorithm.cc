#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v;
v.push_back(3);
v.push_back(7);
v.push_back(9);
// finding element
cout<<binary_search(v.begin(),v.end(),1)<<endl;
return 0;
}