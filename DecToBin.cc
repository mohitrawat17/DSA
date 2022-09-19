#include<iostream>
#include<math.h>
using namespace std;


int main() {

    int n;
     cout<<"Enter the number : ";
    cin >> n;
    int result  = 0;
    int i = 0;
    while(n != 0 ) {

        int b  = n & 1;
          
        if(b==1){
            b==0;
        }
        else{
            b==1;
        }


        result = (b * pow(10, i) ) + result;
        n = n >> 1;

        i++;

    }

    cout<<" result is " << result << endl;
    return 0;
}

