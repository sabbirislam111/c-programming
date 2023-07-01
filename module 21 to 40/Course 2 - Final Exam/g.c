#include<stdio.h>
#include<string.h>
int main(){
int a, b;
scanf("%d %d", &a, &b);

char ch[100000];
scanf("%s", ch);



int len = strlen(ch);

for(int i = 0; i < a-1; i++){

    printf("%c", ch[i]);

}

for(int i = b-1; i >= a-1; i--){
    printf("%c", ch[i]);
}

for(int i = b; i < len; i++){

    printf("%c", ch[i]);
}



 return 0;
}
