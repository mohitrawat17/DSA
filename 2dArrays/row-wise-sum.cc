#include <iostream>
using namespace std;
void show(int arr[][4], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void rowSum(int arr[][4], int n, int m)
{
    int sumArr[4];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum=0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + arr[i][j];
        }
        
        sumArr[i] = sum;
    }
cout<<endl;
    for(int i=0;i<n;i++){
        cout<<sumArr[i]<<" ";
    }
}

int main()
{
    int arr[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    show(arr, 4, 4);
    cout << endl;
    rowSum(arr, 4, 4);
     return 0;
}