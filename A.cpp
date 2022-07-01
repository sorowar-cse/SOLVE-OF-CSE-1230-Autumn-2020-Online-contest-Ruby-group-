#include<iostream>
using namespace std;

int main()
{
    int n, t, x, y;
    cin >> n;

    for(int i=1; i<n+1; i++)
    {
        cin >> x >> y;
        t= (x/3)+(y/3);

        cout << "Case " << i << ": " << t << endl;
    }


    return 0;
}
