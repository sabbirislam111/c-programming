#include <stdio.h>
int main()
{
    int out, in, check, i, flag =0;
    scanf("%d %d %d", &out, &in, &check);

    while(out != in)

    {



        if(out >= 24)
        {
            out = 0;

        }

        if(out == in && in == check && out == check){
            flag = 0;
        }

        else if(out==check){

            flag = 1;
            break;

        }


        out++;
    }
    if(flag == 0){
        printf("No");
    }
    else{
        printf("Yes");
    }
    return 0;
}
