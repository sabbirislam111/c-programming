#include<stdio.h>
int main(){

char ch[100];
fgets(ch, 100, stdin);

printf("%s", ch);


int indx = 0;
while(ch[indx] != '\0'){

        indx++;
}
printf("%d", indx);







//for(int i = 0; i < ln; i++){
//
//}
//
//    printf("%s", ch);



 return 0;
}
