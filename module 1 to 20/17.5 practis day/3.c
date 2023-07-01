#include<stdio.h>
int maxvalue(int a, int b){

        if(a < b)        return b;
        else             return a;
}


int arrmaxvalue(int siz, int arr[]){
    int max = arr[0];
    for(int i = 0; i < siz; i++){
      max =  maxvalue(arr[i], max);
    }
    return max;

}



int main(){
    int n, ans;
    scanf("%d", &n);
    int arr[n];// = {5, 7, 45, 78, 30};
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);

    }

    //int siz = sizeof(arr)/ sizeof(arr[0]);
    ans = arrmaxvalue(n, arr);
    printf("%d", ans);


}
