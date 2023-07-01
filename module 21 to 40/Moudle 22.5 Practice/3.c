#include<stdint.h>
void swap(int* a, int*b){
    int temp = *a;
        *a = *b;
        *b = temp;
}


void sort(int siz, int num[]){
    int count = 0;
    for(int steps = 0; steps < siz; steps++){
          count++;
        int maxnum = num[steps], posi = steps;
        for(int i = siz-1; i >  steps; i--){
            if(maxnum > num[i]){
               maxnum = num[i];
                posi = i;
            }
        }
        swap(&num[steps], &num[posi]);
    }
    printf("Count = %d\n", count);

}


int main(){
 int n;
scanf("%d", &n);
int num[n];
for(int i = 0; i < n; i++){

    scanf("%d", &num[i]);
}
sort(n, num);

for(int i = 0; i < n; i++){

    printf("%d ", num[i]);
}

}
