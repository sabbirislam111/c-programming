#include<stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int siz;
    int arr[10];
    int flag = 0;

    int count[10] = {0};
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &siz);
        for(int j = 0; j < siz; j++)
        {
            scanf("%d", &arr[j]);

        }


        for(int j = 0; j < siz; j++)
        {

            int val = arr[j];
            count[val]++;
        }


        for(int valu = 0; valu < 10; valu++)
        {


            if(count[valu] > 0 && count[valu] >= 3)
            {
                printf("%d ",valu);
                plag = 1;

            }


            count[valu] = 0;

        }
        printf("\n");



    }












}
