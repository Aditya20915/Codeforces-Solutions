#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string line;
        cin>>n>>line;
        long long int val=0,chng_in_val[n];
        for(int i=0;i<n;i++)
        {
            if(line[i]=='L')
            {
                val+=i;
                chng_in_val[i]=n-2*i-1;
            }
            else
            {
                val=val+(n-i-1);
                chng_in_val[i]=2*i-n+1;
            }
        }
        sort(chng_in_val,chng_in_val+n,greater<int>());
        for(int i=0;i<n;i++)
        {
            if(chng_in_val[i]>0)
            {
                val+=chng_in_val[i];
            }
            cout<<val<<' ';
        }
        cout<<endl;
    }
    return 0;
}
