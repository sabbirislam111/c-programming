#include<stdio.h>
void fun(int start){
    if(start == 21) return;
    printf("%d ",start);
    fun(start+2);

}



int main(){
    fun(1);



 return 0;
}
