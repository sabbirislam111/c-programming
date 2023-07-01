#include <stdio.h>

int max1 (int a, int b)

{

    int c;
    if (a > b)
    {
        c = a;
    }
    else
        c = b;

    return c;
}



int min1(int a, int b)

{

    int c;
    if (a < b)
    {
        c = a;
    }
    else
        c = b;
    return c;
}

int main()

{

    int T;
    scanf("%d", &T);
    int a[T];
    int max, min;
    int ans = 0;


    for (int i = 0; i < T; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    for (int j = 1; j <= T; j++)
    {
        if ((a[j] > max) || (a[j] < min))
        {
            ans++;
        }
        max = max1(a[j] ,max);
        min = min1(a[j], min);
    }
    printf("%d", ans );

}
