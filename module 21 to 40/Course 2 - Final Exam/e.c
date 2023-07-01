#include<stdio.h>
void swap_min(int arr[], int n, int n2)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n2; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

        }
    }

}

int sub(int arr[], int n, int n2)
{
    int arr2[n2];
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n2; j++)
        {
            int sub = arr[j] - arr[i];
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            arr2[i] = sub;
        }

    }
}

int main()
{

    int n;
    scanf("%d", &n);
    int arr[300];
    int n2;
    for(int i = 0; i < n; i++)
    {

        scanf("%d", &n2);

        for(int j = 0; j < n2; j++)
        {
            scanf("%d", &arr[j]);

        }

        swap_min(arr, n, n2);

        sub(arr, n, n2);



        printf("\n");


    }


    return 0;
}
