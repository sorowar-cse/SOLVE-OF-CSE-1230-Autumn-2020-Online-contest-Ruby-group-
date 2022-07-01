#include<bits/stdc++.h>
#define lld  long long int
#define D double

using namespace std;

int main()
{

    lld x, y, a, b,c=0,c2,c3=0,M,L,t,i,j=0,k,r,n,p,q=0,l,x1,y1,x2,y2,m=0;
    cin>>t;
    for(l=1; l<=t; l++) {
        cin>>n>>m;
        for(i=1; i<=n; i++) {
            cout<<"*";
        }
        cout<<endl;
        for(i=1; i<=m-2; i++) {
            for(j=1; j<=n; j++) {
                if(j==1 || j==n)cout<<"*";
                else cout<<" ";
            }
            cout<<endl;
        }

        for(i=1; i<=n; i++) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}
