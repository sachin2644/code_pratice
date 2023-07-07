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
    cout<<"displaying 2-D array elements \n";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<" "<<arr[i][j];
        }
        cout<<"\n";
    }
}