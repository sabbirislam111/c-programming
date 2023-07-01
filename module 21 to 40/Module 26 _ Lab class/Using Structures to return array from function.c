#include<stdio.h>
struct ArrayHolder{
    int arr[100];

};


struct ArrayHolder makrNarray(int n){
   struct ArrayHolder out;
    for(int i = 0; i < n; i++){
        out.arr[i] = i+1;
    }
    return out;
}


int main(){
    int n;
    scanf("%d", &n);


    struct ArrayHolder out = makrNarray(n);
    for(int i = 0; i < n; i++){
        printf("%d ", out.arr[i]);
    }


}
