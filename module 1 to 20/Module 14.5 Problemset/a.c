#include<stdio.h>
int main()
{

    int n;
    int p;

    scanf("%d", &n);

    int ans[n];

    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &p);

        ans[p - 1] = i;
    }

    for (int i = 0; i < n; ++i)
    {
       printf("%d ", ans[i]);
    }
    printf("\n");
}
