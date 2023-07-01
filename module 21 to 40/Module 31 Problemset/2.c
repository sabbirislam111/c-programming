#include<stdio.h>
#include<string.h>
int main()
{

    char ch[1000];
    gets(ch);
    //int len = strlen(ch);
    int count = 0;

    for(int i = 0; ch[i] != '\0'; i++)
    {
        if(ch[i] >= 'a' && ch[i] <= 'z')
        {
            count++;
        }
        for(int j = i+ 1; ch[j] != '\0'; j++)
        {
            if(ch[j] == ch[i])
            {
                for(int k = j; ch[k] != '\0'; k++)
                {
                    ch[k] = ch[k + 1];
                }
            }
        }
    }
    printf("%d", count);


    return 0;
}
