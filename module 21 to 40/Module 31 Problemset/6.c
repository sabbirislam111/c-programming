#include<string.h>

int main()
{
    int n,a,b,m=0,c=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d", &a, &b);
        if(a>b)
            m++;
        if(a<b)
            c++;
    }
    if(m>c)
        printf("Mishka");

    else if(m<c)
        printf("Chris");

    else
        printf("Friendship is magic!^^");

    return 0;
}
