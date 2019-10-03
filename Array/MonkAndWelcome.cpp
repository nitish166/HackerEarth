#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int* arr = new int[n];
    int* arr1 = new int[n];
    int* arr2 = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
       
    }
    for(int m=0;m<n;m++)
    {
        cin>>arr1[m];
    }
    for(int j=0;j<n;j++)
    {
        arr2[j] = arr[j]+arr1[j];
    }
    for(int k=0;k<n;k++)
    {
        cout<<arr2[k]<<" ";
    }
    return 0;
}