#include<iostream>
using namespace std;

int main(){



// <- first ->

// int i=1;
// while(i<=4){
//     int j=1;
//     while(j<=i){
//         cout<<(i-j+1);
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// <- second ->

// int i=1;
// while(i<=3){
//     int j=1;
//     while(j<=3){
//     char ch='A'+j-1;
//     cout<<ch;
//     j++;
//     }
//     i++;
//     cout<<endl;
// }

// <- third ->

// int i=1;
//  char c='A';
// while(i<=3){
//     int j=1;
   
//     while(j<=3){
//         cout<<c;
//         c++;
//     j++;
//     }
//     i++;
//     cout<<endl;
// }

// <- fourth ->

// int i=1;
// while(i<=3){
//     int j=1;
   
//     while(j<=3){
//         char ch='A'+i+j-2;
//        cout<<ch;
//     j++;
//     }
//     i++;
//     cout<<endl;
// }

// <- fifth ->

// int i=1;
// while(i<=4){
//     int j=1;
//     char ch='A'+i-1;
//     while(j<=i){
//         cout<<ch;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// <- sixth ->

// int i,j,c='A';
// for(i=1;i<=4;i++){
//     for(j=1;j<=i;j++){
//         char d=c;
//       cout<<d;
//       c++;
//     }
//     cout<<endl;
// }

// <- seventh ->

// int i=1;
// while(i<=4){
// int j=1;
// while(j<=i){
//     char d='A'+i+j-2;
//     cout<<d;
//     j++;
// }
// i++;
// cout<<endl;
// }

// <- eight ->

int i=1;
while(i<=4){
int j=1;
while(j<=i){
    int c='A'+3-i+j;
   cout<<char(c);
    j++;
}
i++;
cout<<endl;
}



}