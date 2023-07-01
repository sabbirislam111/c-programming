#include<stdio.h>
#include<stdbool.h>
bool check_array(int *arr, int n)
{
    for(int i = 1; i <= n; i++)
    {
        if(arr[i-1] != i)
        {
            return false;
        }

    }
    return true;


}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }
    bool ans = check_array(arr, n);



    if(ans)
    {
        printf("yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}


