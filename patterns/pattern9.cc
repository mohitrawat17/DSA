#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j >= 1; j--)
        {
            cout << " ";
        }
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        for(int l=i-1;l>=1;l--){
            cout<<l;
        }
        cout << endl;
    }

    return 0;
}

/*    1
     121
    12321
   1234321
*/