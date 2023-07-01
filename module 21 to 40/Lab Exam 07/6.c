#include<stdio.h>

int main(){


    int tc,pos,n,i,k;

    scanf ("%d",&tc);
     char str[1000];
    for (pos=1; pos<=tc; pos++)
    {
        scanf("%d\n%s",&n, &str);

        k = 1;

        if (n < 11)
            k = 0;
        else
        {
            k = 0;

            for (i=0; i<n; i++)
            {
                if (str[i] == '8' && n-i >= 11)
                {
                    k = 1;
                    break;
                }
            }
        }

        if (k == 1)
            printf ("YES");
        else
            printf ("NO");

        printf ("\n");
    }

   return 0;
}
