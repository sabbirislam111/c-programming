#include<stdio.h>
struct Person
{
    char name[100];
    int val1;
    int val2;
};

void structure_sort(struct Person arr[], int siz)
{
    for(int i = 0; i < siz; i++)
    {
        for(int j = i+1; j < siz; j++)
        {
            if(arr[i].val1 > arr[j].val1)
            {
                struct Person temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < siz; i++)
    {
        arr[i].val2 = arr[i].val1;
    }

}


int main()
{
    int n;
    scanf("%d", &n);

    struct Person arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i].val1);
    }


    structure_sort(arr, n);
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i].val2);
    }


    return 0;
}
