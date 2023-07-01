#include <stdio.h>

int main()
{

    int n,i;
    scanf("%d", &n);
    int arr[n];
    int position = -1;
    int num = 2;

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);



        if(num == arr[i]){
           position = i +1;
           break;
        }

    }

    if(position == -1){
        printf("Not found");
    }
    else{
        printf("%d", position);
    }













return 0;
}
