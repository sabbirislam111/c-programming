#include<stdio.h>
int getMin(int a, int b){
    if(a < b)  return a;
    else       return b;


}


int getArrayMin(int a, int b[]){
    int min = b[0];
    for(int i = 0; i < a; i++){
       min = getMin(b[i], min);
    }
    return min;

}


int main(){
    int arr[] = {3, 4, 7, 10, 6};

    int sz = sizeof(arr)/ sizeof(arr[0]);

    int x = getArrayMin(sz, arr);
    printf("%d", x);
}
