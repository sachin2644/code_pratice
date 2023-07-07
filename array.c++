#include<iostream>
using namespace std;
#define row 2
#define col 3
int main()
{
    int arr[row][col];
    int i,j;
    cout<<"Enter array elements \n";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"displaying 2-D array elements row \n";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"displaying 2-D array elements col \n";
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<"\n";
    }
}