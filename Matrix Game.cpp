#include<iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j;
        cin>>n>>m;
        int a[n+1][m+1];
        set<int>p;
        set<int>q;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
                if(a[i][j]==1)
                {
                    p.insert(i);
                    q.insert(j);
                }
            }
        }


        if(min(n-p.size(),m-q.size())%2==0)
            cout<<"Vivek"<<endl;
        else cout<<"Ashish"<<endl;

    }
}
