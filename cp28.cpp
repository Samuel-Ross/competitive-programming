#include<bits/stdc++.h>
using namespace std;
int main()
{

 int t;
 
 cin>>t;
 while(t--)
  {
    long long m,n,b[105],v[105];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>v[i];
    }
    long long bea=b[0]+n-1;
    long long ver=v[0]+m-1;
    if(bea>=ver)
    {
        cout<<1<<endl;

    }
    else 
    {
        cout<<2<<endl;
    }


  }
}