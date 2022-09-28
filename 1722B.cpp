#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int nc;
        string r1,r2;
        cin>>nc>>r1>>r2;
        for(int i=0;i<nc;i++)
        {
            if(r1[i]=='G')
            {
                r1[i]='B';
            }
            if(r2[i]=='G')
            {
                r2[i]='B';
            }
        }
        if(r1==r2)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}
