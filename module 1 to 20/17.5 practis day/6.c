#include<stdio.h>
int mtpRotet(int siz, int rt, int arr[]){


//    for(int i = 0; i < siz; i++){
//        printf("%d ", arr[i]);
//    }

    printf("\n");
    for(int i = 0; i < siz ; i++){
        printf("%d ", arr[(i+ rt)%siz]);

    }



}


int main(){
    int rt;
    scanf("%d", &rt);
    int arr[] = {1, 2, 3, 4, 5};
    int siz = sizeof(arr)/sizeof(arr[0]);



    mtpRotet(siz, rt, arr);


}
