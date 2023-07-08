#include <iostream>
using namespace std;
/*
D
CD
BCD
ABCD
*/
int main() {
   
   int n=4;
   for(int i=1;i<=n;i++){
       char ch='A'+n-i;
       for(int j=1;j<=i;j++){
           
           cout<<ch;
           ch++;
           
       }
       cout<<endl;
   }

    return 0;
}