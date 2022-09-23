#include <iostream>
using namespace std;

void search(int a[], int n, int s)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (s == a[i])
        {
        break;  
        }
    }
   if(i<n){
      cout << "Element found at location " << i + 1<<endl;
   }
   else{
    cout<<"NOT FOUND !";
   }

}

int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int ar[10];
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int s;
    cout << "Enter element to search : ";
    cin >> s;
    search(ar, n, s);

    return 0;
}
