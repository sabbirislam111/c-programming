#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    int flag = 0;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

        }


    }

    for(int i = 0; i < m; i++)
    {
        if(arr[i] < 0){
          count+= -arr[i];
          flag = 1;
        }


    }
    if(flag == 0){
        printf("0");
    }
    else{
       printf("%d", count);
    }


    return 0;
}
