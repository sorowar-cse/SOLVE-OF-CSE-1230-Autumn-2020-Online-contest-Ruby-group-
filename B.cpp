
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b,c;
        int v[110]={0};
        cin>>a>>b>>c;
        v[a]++;
        v[b]++;
        v[c]++;
        if(v[a]==3||v[b]==3||v[c]==3)
            cout<<"3"<<endl;
        else if(v[a]==2||v[b]==2||v[c]==2)
            cout<<"2"<<endl;
        else
            cout<<"1"<<endl;
    }
    return 0;


}
