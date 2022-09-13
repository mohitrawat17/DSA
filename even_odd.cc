#include<iostream>
using namespace std;
class EvenOdd{
private:
int a;
public:
void set(int x){
a=x;
}
void get(void){
if(a%2==0){
    cout<<"a is even"<<endl;
}
else{
    cout<<"a is odd"<<endl;
}
}
};
int main(){
EvenOdd first;
first.set(90);
first.get();
return 0;
}