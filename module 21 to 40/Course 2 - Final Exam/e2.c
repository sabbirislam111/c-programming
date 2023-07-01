#include<stdio.h>
#include<stdlib.h>
#define INT_MAX 2147483647
int main(){
        int t, min;
        int a[50];
        scanf("%d",&t);
        while (t--)
        {
                int n;
               scanf("%d",&n);
               min = INT_MAX;
               for (int i = 0; i < n; i++)
               {
                        scanf("%d",&a[i]);
               }
               for (int i = 0; i < n-1; i++)
               {
                        for (int j = i+1; j<n ; j++)
                        {
                               if (abs(a[i]-a[j])<min) {
                                    min=abs(a[i]-a[j]);
                               }

                        }

               }

               printf("%d\n",min);
        }
        return 0;

}
