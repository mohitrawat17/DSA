#include<iostream>
#include<set>
#include<map> 
using namespace std;
int main(){
    /////////////////////////////
set<int> s;
s.insert(9);
s.insert(5);
s.insert(3);
s.insert(9);
s.insert(2);
for(int i:s){
cout<<i<<endl;
}
/////////////////////////////////

map<int,string> m;
m[3]='mohit';
m[5]='rawat';
m[4]='singh';
for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}


return 0;
}