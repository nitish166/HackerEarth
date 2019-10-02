#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
    int n;
    cin>>n;
    int* arr = new int[1001]();
    for(int i =0;i<n;i++)
    {
        int k;
        cin>>k;
        // store count of the number
        arr[k]++;
    }
    
    int q;
    cin>>q;
    while(q--)
    {
        int k;
        cin>>k;
        if(arr[k] == 0)
        {
            cout<<"NOT PRESENT"<<"\n";
        }
        else
        {
            cout<<arr[k]<<"\n";
        }
        
    }
    return 0;
}
