#include<stdio.h>
struct Person
{
    char name[100] ;
    int val;

};

void structure_sort(struct Person arr[], int siz)
{

    for(int i = 0; i < siz; i++)
    {

            if(arr[i].val <= 0)
            {
               arr[i].val = arr[i].name;
               printf("invalid");
            }
    }

}


int main()
{
    int n;
    scanf("%d", &n);

    struct Person arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i].val);
    }


    structure_sort(arr, n);
    for(int i = 0; i < n; i++)
    {
//        if(arr[i].val <= 0){
//            printf("%s ", arr[i].name);
//        }
        if(arr[i].val > 0){
            printf("%d ", arr[i].val);
        }
    }


    return 0;
}

