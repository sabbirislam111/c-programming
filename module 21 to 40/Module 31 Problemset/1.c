#include<stdio.h>

int main()
{
    int m,i,j,n, p,q,flag = 0;
    scanf("%d",&n);
    scanf("%d",&p);
    int x[p], passlavel[n];
    for(i=0; i<p; i++)
    {
        scanf("%d",&x[i]);
        m = x[i];
        passlavel[m] = 1;
    }
    scanf("%d",&q);
    int y[q];
    for(i=0; i<q; i++)
    {
        scanf("%d",&y[i]);
        m = y[i];
        passlavel[m] = 1;
    }
    for(i=1; i<=n; i++)
    {
        if(passlavel[i]==1)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    if(flag==1)
        printf("I become the guy.\n");
    else
        printf("Oh, my keyboard!\n");
    return 0;
}
