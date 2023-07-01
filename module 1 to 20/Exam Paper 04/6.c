#include<stdio.h>
void makeNArray(int n, int squares[]){
    //int squ[n];
    for(int i = 0; i < n; i++){

         printf("%d ", squares[i]* squares[i]);
    }

}

int main(){
int n;
scanf("%d", &n);

int squares[n];
for(int i = 0; i < n; i++){
    scanf("%d", &squares[i]);
}
makeNArray(n, squares);

}
