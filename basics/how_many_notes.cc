// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int rs100;
    int rs50;
    int rs20;
    int rs1;
    int n=1330;
    
    
    
    
    
    switch(1){
        case 1: rs100=n/100;
                n=n%100;
                  
        case 2: rs50=n/50;
                n=n%50;
                 
        case 3: rs20=n/20;
                n=n%20;
        case 4: rs1=n/1;
                n=n%1;
 
    }
    
    cout<<"100 notes : "<<rs100<<endl;
    cout<<"50 notes : "<<rs50<<endl;
    cout<<"20 notes : "<<rs20<<endl;
    cout<<"1 notes : "<<rs1<<endl;

    return 0;
}