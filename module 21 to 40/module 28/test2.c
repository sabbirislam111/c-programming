#include<stdio.h>
#include<string.h>
int main()
{

    int n;
    scanf("%d", &n);
    char str[100];
    scanf("%s", str);

    int x = 0, z =0;
    int countn[26] = {0};
    int countz[26] = {0};
    for(int i = 0; i < strlen(str); i++)
    {
        char valu = str[i];
        if(valu == 'n')
        {

            x++;
        }
        if(valu == 'z')
        {

            z++;
        }

    }


        for(int i = 0; i < x; i++)
        {
            printf("1 ");

        }
        for(int i = 0; i < z; i++)
        {
            printf("0 ");

        }


    return 0;
}
