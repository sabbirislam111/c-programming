#include <stdio.h>
int main()
{

 int  Harry, Larry;
    scanf("%d %d",&Harry, &Larry);


    int notshot_Harry = (Harry + Larry)- Harry - 1 ;

   int notshot_Larry = (Harry + Larry)- Larry - 1;
     printf("%d %d", notshot_Harry, notshot_Larry);
    return 0;
}
