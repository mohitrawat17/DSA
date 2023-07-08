#include <iostream>
using namespace std;
/*
AAAA
BBBB
CCCC
DDDD
*/
int main() {
    char ch=65;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            cout<<ch;
            
        }
        ch++;
        cout<<endl;
    }

    return 0;
}