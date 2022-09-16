#include<iostream>
using namespace std;

int main(){



// <- first ->

// int i,j;
// for(i=1;i<=4;i++){
//     for(j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }


// <- second ->

// int i,j,c=1;
// for(i=1;i<=4;i++){
//     for(j=1;j<=i;j++){
//         cout<<c;
//         c++;
//     }
    
//     cout<<endl;
// }

// <- third ->

int i,j;
for(i=1;i<=4;i++){
    int k=i;
    for(j=1;j<=i;j++){
        cout<<k;
        k++;
    }
    
    cout<<endl;
}




return 0;
}