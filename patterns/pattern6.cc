#include <iostream>
using namespace std;
/*
A
BC
CDE
DEFG
*/
int main() {
   
   
   for(int i=1;i<=4;i++){
       char ch='A'+i-1;
       for(int j=1;j<=i;j++){
           cout<<ch;
           ch++;
       }
       cout<<endl;
   }

    return 0;
}