#include<stdio.h>
int main(){
    int getMin(int a, int b){
        int temp;
        if(a < b){
             temp = a;
        }
        else{
            temp = b;
        }
        return temp;

    }

    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    int temp = getMin(a, b);
    int temp2 = getMin(temp, c);

    printf("%d", temp2);

}
