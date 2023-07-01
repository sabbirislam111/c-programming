#include<stdio.h>
#include<string.h>
int main()
{
    int len=0,As=0,good=0;
    char s[100];
    gets(s);
    len=strlen(s);
    for(int i=0; i<len; i++)
        if(s[i]=='a')
            As++;

    good=len/2;
    if(good==As)
        printf("%d", len-2);
    else if(good<As)
       printf("%d", len);
    else if(good>As)
        printf("%d", As+1);
        else{
           printf("%d",2*As-1);
        }


    return 0;
}
