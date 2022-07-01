#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int tc, n, x;
    int i=1, j=1, k, kk;
    int a[1005];
    scanf("%d", &tc);

    for(i=1; i<=tc; i++)
    {
        int t1=0, t2=0;

        scanf("%d", &n);

        for(j=1; j<=n; j++)
            scanf("%d", &a[j]);

        scanf("%d", &x);

        for(k=1; k<=x; k++)
            t1 += a[k];

        for(kk=x; kk<=n; kk++)
            t2 += a[kk];

        if(t1 > t2)
            printf("%d\n", t1);

        else if(t1 <= t2)
            printf("%d\n", t2);

    }
    return 0;
}
