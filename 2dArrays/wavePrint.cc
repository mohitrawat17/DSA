#include <iostream>
using namespace std;
void wavePrint(int arr[][3], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        if (col&1)
        {
            for (int j = row - 1; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        {
            for (int j = 0; j < row; j++)
            {
                cout << arr[j][i] << " ";
            }
        }
        cout<<endl;
    }
}

void show(int arr[][3], int n, int m)
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
int main()
{
    int arr[3][3];
    cout << "Enter Elements : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    show(arr,3,3);
    wavePrint(arr, 3, 3);
    return 0;
}