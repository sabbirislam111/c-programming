#include<stdio.h>
struct Person
    {
	    char name[100];
	    int val;
	};

int get_max(struct Person arr[], int n){

    int max = arr[0].val;
    for(int i = 0; i < n; i++){
        if(max < arr[i].val){
            max = arr[i].val;
        }
    }
    return max;

}

int main(){
    FILE * inpFile = fopen("inp.txt", "r");
    FILE * outpFile = fopen("outp.txt", "w");

    int n;
    fscanf(inpFile,"%d", &n);

    struct Person arr[n];
    for(int i = 0; i < n; i++)
    {
        fscanf(inpFile,"%d", &arr[i].val);
    }

    int ans = get_max(arr, n);
    fprintf(outpFile,"Max is = %d", ans);

 return 0;
}

