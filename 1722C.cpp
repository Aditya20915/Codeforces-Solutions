#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<string,int> mp;
        string words[3][n];
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>words[i][j];
                mp[words[i][j]]++;
            }
        }
        for(int i=0;i<3;i++)
        {
            int total=0;
            for(int j=0;j<n;j++)
            {
                if(mp[words[i][j]]==1)
                {
                    total+=3;
                }
                else if(mp[words[i][j]]==2)
                {
                    total+=1;
                }
            }
            cout<<total<<' ';
        }
        cout<<endl;
    }
    return 0;
}
