#include <iostream>
using namespace std;
/*
   *
  **
 ***
****
*/
int main() {
   int n=4;
   
  for(int i=1;i<=n;i++){
      for(int j=n-i;j>=1;j--){
          cout<<" ";
      }
      for(int x=1;x<=i;x++){
          cout<<"*";
      }
      cout<<endl;
  }
 

    return 0;
}