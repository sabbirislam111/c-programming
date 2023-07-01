#include<stdio.h>
#include<string.h>
char concat(char a[], char b[]){

    int i=0;
    while(a[i] != '\0')
    {
        printf("a = %c\n", a);
        i++;

    }

    int j = 0;
    while(a[j] != '\0')
    {
        b[i] = a[j];
        printf("a = %c\n", a);
        printf("b = %c\n", b);
        i++;
        j++;
    }

        b[i] = '\0';
    //return b[i];
    printf("%s", b);

    printf("\n");


}


char rev(char str[], int len){
    for(int i=len-1;i>=0;i--)
    {
            //printf("%c",str[i]);
            return str[i];

    }
}

void toBainary(unsigned int val, char ch[], int k){
     int idx = 0;
    while(val > 0){
        int digit = val%2;
            val = val/2;
            ch[idx] = '0'+ digit;
             printf("%d\n", ch[idx]);
            idx++;


    }
    ch[idx] = '\0';
    int len = strlen(ch);
    rev(ch, len);

    int ins_0 = k - len;
    printf("ziro = %d\n", ins_0);

    char ch2[ins_0];
    for(int i = 0; i < ins_0; i++){
        ch2[i] = '0';
    }

    concat(ch, ch2);



}

int main(){
    char str[100], str2[100], str3[100];

    unsigned int v = 25;



    toBainary(v, str, 8);


    //printf("%c", v);


}

