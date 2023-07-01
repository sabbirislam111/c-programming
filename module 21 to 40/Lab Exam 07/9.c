#include<stdio.h>
#include<string.h>
int main()
{

    int n;
    scanf("%d", &n);
    char str[100];
    scanf("%s", str);

    //int x = 0, z =0;
    //int countn[26] = {0};
    //int countz[26] = {0};
    for(int i = 0; i < strlen(str); i++)
    {
        char valu = str[i];
        if(valu == 'n')
        {
            //countn[valu-'a']++;
            //x++;
            printf("1 ");
        }
        if(valu == 'z')
        {
            //countz[valu-'a']++;
            //z++;
            printf("0 ");
        }

    }

//    for(int valu = 'a'; valu <= 'z'; valu++)
//    {
//
//        for(int i = 0; i < countn[valu - 'a']; i++)
//        {
//            printf("1");
//
//        }
//        for(int i = 0; i < countz[valu - 'a']; i++)
//        {
//            printf("0");
//
//        }
//
//
//    }


//        for(int i = 0; i < x; i++)
//        {
//            printf("1 ");
//
//        }
//        for(int i = 0; i < z; i++)
//        {
//            printf("0 ");
//
//        }


    return 0;
}
