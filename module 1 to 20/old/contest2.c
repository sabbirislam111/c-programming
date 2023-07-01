#include<stdio.h>
int main()
{
  int n;
  scanf("%d", &n);

  for(int i = 1; i <= n; i++){
    int without_adv;
    int with_adv;
    int adv_cost;
    scanf("%d %d %d", &without_adv, &with_adv, &adv_cost);

    if(without_adv < (with_adv - adv_cost)){
        printf("advertise\n");
    }
    else if(without_adv == (with_adv - adv_cost)){
        printf("does not matter\n");
    }
    else{
       printf("do not advertise\n");
    }
  }

return 0;
}
