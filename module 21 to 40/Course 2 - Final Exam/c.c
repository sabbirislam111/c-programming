#include<stdio.h>
int main()
{

    int n;
    scanf("%d", &n);


    for(int i = 0; i < n; i++)
    {
        int n2 = 0;
        scanf("%d", &n2);
        int arr[300] ={0};
        for(int j = 0; j < n2; j++)
        {
            scanf("%d", &arr[j]);

        }

        int j = 0, k = n2-1;
        while(j <= k)
        {

             if(j == k)
            {
                printf("%d ", arr[j]);

                  printf("\n");
                break;
            }
            printf("%d ", arr[j]);
            printf("%d ", arr[k]);

            j++;
            k--;


        }


    }



    return 0;
}
