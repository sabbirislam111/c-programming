#include<stdio.h>
#include<string.h>
char *strrev(char *str){
    if(!str || !*str)
        return str;


    int i = strlen(str) - 1, j = 0;

    char ch;
    while(i > j){
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i--;
        j++;
    }
    return str;
}

void toBainary(unsigned int val, char ch[], int k){
     int idx = 0;
    while(val > 0){
        int digit = val%2;
            val = val/2;
            ch[idx] = '0'+ digit;
            idx++;
    }

    for(int i = idx; i < k; i++){
        ch[i] = '0';
        ch[k] = 0;
        strrev(ch);
    }

}

int main(){
    char str[100], str2[100], str3[100];

    unsigned int v = 54;
    unsigned int v2 = 55;
    unsigned int xor = v ^ v2;

    toBainary(v, str, 8);
    printf("%d\t= %s\n",v, str);

    toBainary(v2, str2, 8);
    printf("%d\t= %s\n",v2, str2);

    toBainary(xor, str3, 8);
    printf("Xor\t= %s\n", str3);





}

