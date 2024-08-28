#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[100000],i,j,n,x=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort (a,a+n);
        x=abs(a[0]-a[1]);
        if(x>1&&n==2)  cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}


