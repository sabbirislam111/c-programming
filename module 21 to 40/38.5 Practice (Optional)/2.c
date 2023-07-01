#include<stdio.h>
struct Person
    {
	    char name[100];
	    int val;
	};

int get_max(struct Person arr[], int n){

    int max = arr[0].val;
    for(int i = 0; i < n; i++){
        if(max > arr[i].val){
            max = arr[i].val;
        }
    }
    return max;

}

int main(){

    int n;
    scanf("%d", &n);

    struct Person arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i].val);
    }

    int ans = get_max(arr, n);
    printf("%d", ans);

 return 0;
}
