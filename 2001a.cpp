#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    { int a[1000],i,n,count=1,max=1;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
          sort (a,a+n);
          for(i=0;i<n-1;i++){
            if(a[i]==a[i+1]) count++;
            if(max <= count) max=count;
            if(a[i]!=a[i+1]) count=1;
          }
          cout << (n-max)<<endl;
    }
}
