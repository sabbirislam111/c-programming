#include<stdio.h>
int main(){

    int n, pass_mark;
    int marks, count = 0;
    scanf("%d %d", &n, &pass_mark);

    for(int i = 1; i <= n; i++){
        scanf("%d", &marks);

        if(marks < pass_mark){
            count+=1;

        }

    }
 printf("%d", count);



    return 0;
}
