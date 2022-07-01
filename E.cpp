#include<bits/stdc++.h>
using namespace std;

int main()
{


    int t,T;cin>>T;
    cin.ignore();
    for(t=1;t<=T;t++)
    {
       string s1,s2;
       int a1[30]={0};
       int a2[30]={0};
       int f=0;
       cin>>s1>>s2;
       int sz1=s1.size();
       int sz2=s2.size();
       for(int i=0;i<sz1;i++)
       {
         int x=s1[i]-'A';
         a1[x]++;
       }

       for(int i=0;i<sz2;i++)
       {
           int x=s2[i]-'A';
           a2[x]++;
       }

      for(int i=0;i<26;i++)
      {
         if(a1[i]!=a2[i])
         {
            f=1;break;
         }
      }

      cout<<"Case "<<t<<" - ";

      if(f==1)
        cout<<"no"<<endl;
      else
        cout<<"yes"<<endl;


    }

}
