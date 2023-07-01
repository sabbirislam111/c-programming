#include<stdio.h>
int main(){

    int noc;
    scanf("%d", &noc);
    //double sum = 0;
    double rating[noc];
    for(int i = 0; i < noc; i++){
        scanf("%lf", &rating[i]);
        //sum+=rating[i];
        //printf("%lf ", sum);
    }

    int count[6] = {0};
    for(int i = 0; i < noc; i++){
        int x = rating[i];
        count[x]++;
       }
     for(int i = 1; i <= 5; i++){
        printf("%d -> %d\n",i, count[i]);
       }


    //sum = (double)sum/noc;
    //printf("%.1lf", sum);








 return 0;
}
