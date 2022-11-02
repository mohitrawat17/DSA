#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
//////////////////////////////////////////////////////    
// STACK    
stack<int> s;
s.push(1);
s.push(2);
s.push(3);

//top element
cout<<s.top();

// deleting element in stack ids from top 
s.pop();
cout<<s.top();
cout<<endl;
//////////////////////////////////////////////////////////

queue<int> q;
q.push(4);
q.push(5);
q.push(6);
q.pop();
cout<<q.front();
cout<<q.size();
return 0;
}