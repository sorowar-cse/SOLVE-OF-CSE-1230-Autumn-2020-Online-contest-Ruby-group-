#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int tc, i;
    cin >> tc;
    while(tc--)
    {
        long long int n,k;
        cin >> n >> k;
        long long int to= 0;
        for(int i=1; i*i<=n; i++)
        {
            if(n%i==0)
            {
                if(i%k!=0)
                    to +=i;

            if((i*i!=n)&& (n/i)%k!=0)
                    to += n/i;
            }
        }
        cout <<to << endl;
    }
    return 0;
}
