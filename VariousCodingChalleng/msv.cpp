#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;
 
int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        int* a =new int[n];
        map<int,int> s;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s[a[i]]=0;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<=sqrt(a[i]);j++)
            {
                if(a[i]%j==0)
                {
                    s[j]++;
                    if(a[i]/j!=j)
                        s[a[i]/j]++;
                }
            }
            if(count<s[a[i]])
            {
                count=s[a[i]];
            }
        }
        cout<<count-1<<endl;
    }
    return 0;  
}